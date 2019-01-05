#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>

char *par_msg = "hello child process!";
char *child_msg = "hello parent!";

int main(){
  int fd1[2],fd2[2];
  pid_t pid;

  if (pipe(fd1) < 0) exit(1); // 에러 처리
  if (pipe(fd2) < 0) exit(1);
  pid = fork(); // 이 함수 실행 다음 코드부터 부모/자식 프로세스로 나뉘어짐
  if (pid < 0 ) {
    printf("fork failed !");
    return 1;
  }
  if (pid > 0) { // 부모 프로세스는 pid에 실제 프로세스 ID가 들어간다
    char buf[100];
    close(fd1[0]); // 첫번째 파이프의 읽는 부분인 [0]을 닫아준다.
    write(fd1[1],par_msg,strlen(par_msg)+1); // fd[1]에 쓴다
    close(fd1[1]);
    wait(NULL);
    close(fd2[1]); // 두번째 파이프의 쓰는 부분인 [1]을 닫아준다.
    read(fd2[0],buf,100);
    printf("%s \n",buf);
    close(fd2[0]);
    exit(0);
  }
  else { //자식 프로세스는 pid 가 0
    close(fd1[1]); // 첫 번째 파이프의 쓰는 부분인 [1]을 닫아줌.
    char buf[100];
    read(fd1[0],buf,100);
    close(fd1[0]);
    close(fd2[0]);
    write(fd2[1],child_msg,strlen(child_msg)+1);
    close(fd2[1]);
    printf("%s \n",buf);
    exit(0);
  }
  return 0;
}
