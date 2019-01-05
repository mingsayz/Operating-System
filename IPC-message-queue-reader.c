#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define PERMS 0644 // permission
struct my_msgbuf {
   long mtype;
   char mtext[200];
};

int main(void) {
   struct my_msgbuf buf;
   int msqid;
   int toend;
   key_t key;
   
    //shared memory용 IPC키 생성
    // key_t ftok(const char *path, int id);
   if ((key = ftok("msgq.txt", 'B')) == -1) {
      perror("ftok");
      exit(1);
   }

   //메시지 큐 생성
   //int msgget(key_t key, int msgflg);
   if ((msqid = msgget(key, PERMS)) == -1) { /* connect to the queue */
      perror("msgget");
      exit(1);
   }
   printf("message queue: ready to receive messages.\n");
   
   for(;;) { //계속 해서 읽어 온다.
      if (msgrcv(msqid, &buf, sizeof(buf.mtext), 0, 0) == -1) { // 메시지 수신 :ssize_t msgrcv(int msqid, void *msgp, size_t msgsz, long int msgtyp, int msgflg);
         perror("msgrcv");
         exit(1);
      }
      printf("recvd: \"%s\"\n", buf.mtext);
      toend = strcmp(buf.mtext,"end");
      if (toend == 0)
      break;
   }
   printf("message queue: done receiving messages.\n");
   system("rm msgq.txt"); //끝난 후 파일 삭제
   return 0;
}