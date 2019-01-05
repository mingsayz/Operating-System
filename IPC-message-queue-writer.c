#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
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
   int len;
   key_t key;
   system("touch msgq.txt"); //파일 생성
   
   //shared memory용 IPC키 생성
   // key_t ftok(const char *path, int id);

   if ((key = ftok("msgq.txt", 'B')) == -1) {
      perror("ftok"); //error message
      exit(1);
   }
   
   //메시지 큐 생성
   //int msgget(key_t key, int msgflg);
   if ((msqid = msgget(key, PERMS | IPC_CREAT)) == -1) {
      perror("msgget");
      exit(1);
   }
   printf("message queue: ready to send messages.\n");
   printf("Enter lines of text, ^D to quit:\n");
   buf.mtype = 1;
   
   while(fgets(buf.mtext, sizeof buf.mtext, stdin) != NULL) {
      len = strlen(buf.mtext);
      /* remove newline at end, if it exists */
      if (buf.mtext[len-1] == '\n') buf.mtext[len-1] = '\0';
      if (msgsnd(msqid, &buf, len+1, 0) == -1) /* +1 for '\0' */
      //  메시지 전송 :int msgsnd(int msqid, const void *msgp, size_t msgsz, int msgflg);
      perror("msgsnd");
   }
   strcpy(buf.mtext, "end");
   len = strlen(buf.mtext);
   if (msgsnd(msqid, &buf, len+1, 0) == -1) /* +1 for '\0' */
   perror("msgsnd");
   
   if (msgctl(msqid, IPC_RMID, NULL) == -1) { // 메시지 제어 :  int msgctl(int msqid, int cmd, struct msqid_ds *buf);
      perror("msgctl");
      exit(1);
   }
   printf("message queue: done sending messages.\n");
   return 0;
}