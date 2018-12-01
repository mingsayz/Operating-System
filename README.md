# 운영체제 (Operating System : OS)

+ **Definition** : 시스템을 관리할 뿐 아니라 응용 소프트웨어를 실행하기 위하여 하드웨어 추상화 플랫폼과 공통 시스템 서비스를 제공하는
시스템 소프트웨어이다. 최근에는 실제 하드웨어가 아닌 하이퍼바이저 위에서 실행되기도 한다.

## 운영체제의 역할1. 시스템 자원(System Resource) 관리자
    * 시스템 자원(System Resource) = 컴퓨터 하드웨어
      + CPU (중앙처리장치) , Memory(DRAM,RAM)
      + I/O Devices(입출력 장치)
        - Monitor,Mouse,Keyboard,Network
      + 저장매체 : SSD,HDD (하드디스크)

---

> 컴퓨터 하드웨어는 스스로 할 수 있는 것이 없다!

  1. CPU : 각 프로그램이 얼마나 CPU를 사용할지를 결정할 수는 없다.
  2. Memory : 각 프로그램이 어느 주소에 저장되어야 하는지, 어느 정도의 메모리 공간을 확보해줘야 하는지를 결정할 수는 없다.
  3. 저장매체(HDD,SSD): 어떻게 , 어디에 저장할지는 결정할 수 없다.
  4. 키보드/마우스 : 스스로 표시할수는 없음.

> 그래서 운영체제가 필요하다!

---

## 대표적인 운영체제

  * Windows OS, Mac OS, 그리고 UNIX(유닉스)
  * UNIX OS
    - UNIX 계열 OS - LINUX(리눅스)
      + UNIX와 사용법이나, OS 구조가 유사
    - LINUX(리눅스) OS
      + 프로그래머, 전공자가 사용. (웹 서비스라던지, 서버 관리하는데 필수!)

![OS](https://miro.medium.com/max/832/1*o-ly1HJGekl0pGc64992Yg.png)
---

## 운영체제 역할2 : 사용자와 컴퓨터간의 커뮤니케이션 지원

![OS](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT5oJN2N4BYmMG98fAGtfBInYI7nzr9PR9P0J2qsSkPBc3cKypfdg)

---
## 운영체제 역할3 : 컴퓨터 하드웨어와 프로그램을 제어

  * 다양한 응용프로그램들 역시 운영체제가 실행시켜준다. (office 한글, 카카오톡, 게임 등)

---

## 응용 프로그램이란 ?
  * 프로그램 = 소프트웨어
  * 소프트웨어 = 운영체제 , 응용프로그램(엑셀, 파워포인트 등)
  * 응용 프로그램 = Application(일반 PC에서의 프로그램) = App (스마트폰에서의 프로그램)

---
## 운영체제와 응용 프로그램간의 관계
  * 운영체제는 **응용 프로그램** 을 관리
    - 응용 프로그램을 실행시킨다.
    - 응용 프로그램간의 **권한** 을 관리해준다.
      + 관리자 권한으로 실행
    - 응용 프로그램을 사용하는 **사용자** 도 관리
      + 로그인

---
## 운영체제와 응용 프로그램간의 관계(예시)
  * 응용 프로그램은 누구나 만들 수 있다.
    - 응용 프로그램에 무한 반복문을 넣었을 때
    - 응용 프로그램을 잘못 작성해서, 프로그램이 다운.
    - 모든 파일 삭제 막기(권한 / 사용자 관리)
    - 응용 프로그램이 CPU를 많이 사용할 때 이를 막는다.

> 그래서 운영체제는 응용 프로그램을 관리.

---

## 운영체제와 응용 프로그램의 관계 (결론)
  1. 응용 프로그램을 관리한다.
  2. 시스템 자원(System Resource)를 관리한다.
  3. 사용자와 컴퓨터간의 커뮤니케이션을 지원

> 운영체제의 목표 : 사용자가 사용하는 응용 프로그램이 효율적으로, 적절하게 동작하도록 지원

> 운영체제는 응용 프로그램이 요청하는 시스템 리소스를 효율적으로 분배하고, 지원하는 소프트웨어

---

## 컴퓨터 구조 복습
> 컴퓨터를 키면 ? --> 운영체제는 Memory에 올라가게 된다!
### 참고 : 폰노이만 구조

![폰노이만구조](http://mblogthumb4.phinf.naver.net/MjAxODA4MjRfMjYy/MDAxNTM1MDQ0NTc2NTk0.ijmtH3BQW9nMLOwBhztd5TAwE_LjLJHwlyZJaBHtzBMg.78a2Pl5HePn7YHpJy_lSheK45ohFgtdciKZtsN6MbCcg.PNG.tamdal/image.png?type=w800)

> 모든 프로그램은 메모리에 올라가고 하나씩 CPU에 올라간다. 운영체제도 하나의 소프트웨어이기 때문에 메모리에 올라간 후 실행된다.
> 운영체제는 HDD,SSD 저장매체에 저장되어 있다.

## 정리

  1. 운영체제의 역할: 시스템 자원, 응용 프로그램 관리, 효율적 분배
  2. 응용 프로그램이란 ? - 소프트웨어(운영체제, 응용 프로그램)

---

# History 로 보는 운영체제
## - 1950년대 ~ 1960년대 초반
---

## - 1950년대

### ENIAC(에니악) : 첫 번째 컴퓨터 (운영체제가 존재하지 않았음.)
  * 1개의 응용 프로그램을 실행시키기도 바빴음.
  * 응용 프로그램이 직접 시스템 자원을 제어

---

## 1960년대 초기

> 프로그램 종류도 많아지고, 사용자도 슬슬 많아지기 시작

  * 철수 : 프로그램1 - 예상 실행 시간 12시간
  * 영희 : 프로그램2 - 예상 실행 시간 1분
  * 실행 순서 : 프로그램1 --> 프로그램2 (결국 영희는 12시간을 기다렸다가 입력을 주어 프로그램2를 실행시켜야함.)
  * 실행 순서 : 프로그램2 --> 프로그램1
  * 배치 처리 시스템(batch processing system) 출현
    - 여러 응용프로그램을 등록시켜놓으면, 순차적으로 실행하는 시스템
    - 배치 처리 시스템을 기반으로 운영체제가 출현

---

## 1960년대 후반
  * 새로운 개념이 제안됨
    + 시분할 시스템(Time Sharing System)
    + 멀티 태스킹(Multi Tasking)

> 운영체제로 구현되지는 않았음.

---

## 시분할 시스템과 멀티 태스킹

  * 응용 프로그램이 CPU를 사용하는 시간을 잘게 쪼개서, 여러 개의 응용 프로그램을 동시에 실행하는 것처럼 하는 기법

---

## 시분할 시스템과 멀티 태스킹

  * 시분할 시스템: 다중 사용자를 지원하고, 컴퓨터 응답 시간을 최소화하는 시스템
    + **다중 사용자** 를 지원한다는 것은 응답시간을 최소화 해야함! ( 컴퓨터 응답시간: 다음 응용프로그램이 실행되기까지 걸리는 시간 )

  * 멀티 태스킹: 가능한 CPU를 많이 활용하도록 하는 기능 (시간대비 CPU 사용율을 높이는 것)
    + 단일 CPU에서, 여러 응용 프로그램의 병렬 실행을 가능케 하는 시스템

  * 보통은 시분할 시스템, 멀티 태스킹을 동일한 의미로 사용함.

> 멀티 프로그래밍 : 최대한 CPU를 많이 활용하도록 하는 기능 ( 시간대비 CPU 사용율을 높이는 것)
> ex) 어플리케이션1 이 저장매체에서 파일을 읽어오는 등의 일을 하면서 CPU사용을 멈췄을 때 다른 어플리케이션2을 실행시키다가
어플리케이션1이 CPU를 사용해야될 때가 되면 다시 어플리케이션2 실행을 멈추고 어플리케이션1을 CPU에 올림.
> 실제로 응용 프로그램에 할당하는 CPU 점유 시간을 쪼개면 쪼갤 수록 CPU 사용율을 높일수 있다!

---
## 배치 처리 시스템의 단점
  1. 컴퓨터 응답 시간 (response time)이 오래 걸릴 수 있다. (앞 단에 실행시간이 많이 필요로 하는 응용프로그램이 실행될 경우)
  2. 실행 시간도 오래 걸릴 수 있다. (CPU가 필요없음에도 응용 프로그램이 CPU를 점유할 수 있기 때문)

---
## 시분할 시스템과 배치 처리 시스템

  * 시분할 시스템/ 멀티 태스킹
    + 핵심기술 : 시간을 잘게 쪼개서, 여러 응용 프로그램을 실행
      - 컴퓨터 응답 시간을 줄일 수 있음 (시분할 시스템, 다중 사용자 지원)
      - 전체 응용 프로그램의 실행 시간도 줄일 수 있음 (멀티 프로그래밍)
      - 결과적으로, 사용자가 느낄 때에는 여러 응용 프로그램이 동시에 실행되는 것 처럼 보인다. (멀티 태스킹)

---

## 정리
> 1960년대 후반부 정리

  * 시분할 시스템/ 멀티 태스킹
    + 멀티 프로그래밍
  * 기술 : CPU 시간을 잘개 쪼개기
  * 결과 : 다중 사용자 지원, 응용 프로그램 동시 실행

---

## 1970년대

> 제대로된 운영체제가 나옴

### UNIX (유닉스) OS
  * 미국 AT&T 사의 벨 연구소
    + 켄 톰슨, 데니스 리치
    + 데니스 리치 : C 언어를 개발

---

## 운영체제 개발에 C언어가 필요했던 이유

  * 1970년대 이전: Assembly 언어로 소프트웨어 개발
    + CPU(명령어), Memory(주소)를 기계어로 직접 입력해줘야 했다.
    + 컴퓨터 각각의 하드웨어 스펙에 따라 다시 개발해줘야 하는 단점이 있다.
    + 프로그래밍 복잡도가 높음.
  * 1970년대 C언어가 개발된 후:
    + 컴파일러가 등장하면서 하드웨어 스펙에 따라 다시 개발해줄 필요가 없어졌다.

> C언어를 기반으로 운영체제를 개발했다.

---

## UNIX 특징

  * 현대 운영체제의 기본 기술을 모두 포함한 최초의 운영체제
    + 멀티태스킹, 시분할 시스템, 멀티 프로그래밍
      - 다중 사용자 지원

---

## 정리

### 1970년대
  * 본격적으로 운영체제 중요성 부각
  * 현대 운영체제 기술 확립, UNIX OS에 최초 구현
  * UNIX : 멀티태스킹, 시분할 시스템, 멀티 프로그래밍 구현


---

## 1980년대 - 개인용 컴퓨터 시대
  * 개인용 컴퓨터시대
    + 1980년대 이전 : 대형 컴퓨터를 여러 명이 접속해서 사용(UNIX)
    + 1980년대 ~ : Personal Computer (PC)

---
## 용어 이해
  * 용어 이해 : CLI 와 GUI
    + CLI(Command Line Interface) : 터미널 환경
    + GUI(Graphical User Interface) : GUI 환경

---

## 1990년대
  1. 응용 프로그램 시대 (GUI 환경) , 개인용 컴퓨터 (사용자 증대)
    + 엑셀 , 워드 프로세서 등
    + Windows OS 대중화
  2. 네트워크 기술 발전 - (World wide web) WWW 인터넷 대중화
  3. 오픈 소스 운동 활성화 시작
    + UNIX 계열 OS + 응용 프로그램 자체 개발, 소스 오픈
    + LINUX(리눅스) 운영체제, 소스 오픈, 무료

## 2000년대 이후
  1. 오픈 소스 활성화
    + LINUX(리눅스) 운영체제
    + Apache(아파치,웹서버)
    + MySQL(데이터베이스)
    + 안드로이드, 딥러닝, 데이터 사이언스, IoT 관련

  2. 가상 머신, 대용량 병렬 처리 등 활성화

---

## 정리1
 1. 1950년대 : 운영체제 없음 (프로그램이 시스템 자원 직접 제어)
 2. 1960년대 : 배치 처리 시스템
 3. 1970년대 : 시분할 시스템 / 멀티태스킹 시스템 - UNIX OS (C언어)
 4. 1980년대 : GUI , 개인용 컴퓨터
 5. 1990년대 : 다양한 응용 프로그램, 인터넷 발달, 오픈 소스 운동 활성화
 6. 2000년대 : 오픈 소스 활성화, 가상 머신, 대용량 병렬 처리(CPU 코어가 여러개 : 프로그램을 여러개 동시에 실행시키는 것이 가능하게 됨)

---
## 응용 프로그램, 운영체제 , 컴퓨터 하드웨어(시스템 리소스) 관계

### 도서관으로 비유

  * 운영체제는 도서관
  * 응용 프로그램을 시민
  * 컴퓨터 하드웨어는 책
  * 운영체제의 역할
    + 시민은 도서관에 원하는 책(자원)을 요청함
    + 도서관은 적절한 책(자원)을 찾아서, 시민에게 빌려준다.
    + 시민이 기한이 다 되면, 도서관이 해당 책(자원)을 회수한다.

---

## 응용 프로그램, 운영체제, 컴퓨터 하드웨어 관계
  * 운영체제는 응용 프로그램이 요청하는 메모리를 허가하고 분배한다.
  * 운영체제는 응용 프로그램이 요청하는 CPU 시간을 제공한다.
  * 운영체제는 응용 프로그래밍 요청하는 I/O Devices 사용을 허가/제어한다.

---

## 사용자, 응용 프로그램, 운영체제, 컴퓨터 하드웨어 관계
![Operating_systems](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Operating_system_placement.svg/1200px-Operating_system_placement.svg.png)
> 출처 : 위키피디아

---
## 운영체제는 사용자 인터페이스 제공

  * 쉘(Shell)
    - **사용자** 가 운영체제 기능과 서비스를 조작할 수 있도록 인터페이스를 제공하는 프로그램
    - 쉘은 터미널 환경(CLI) , GUI 환경 두 종류로 분류

---
## 운영체제는 응용 프로그램을 위해서도 인터페이스를 제공

  * API(Application Programming Interface) : 사용자가 아닌 응용 프로그램에게 인터페이스를 제공
    + 함수로 제공
      - open() : 파일 입출력 등
    + 보통은 라이브러리(library) 형태로 제공
      - C library (안에 printf, scanf 등의 API가 존재)
    + Users 와 Application , Shell이 운영 체제에 인터페이스를 요청할 때 API 가 없으면 불가능하다.
      - API를 요청서의 집합으로 볼 수 있음
      - Users와 Application을 시민으로 본다면 도서관(OS)에 책(메모리,cpu 등)을 요청하기 위해 신청서(API)를 작성해야한다.

---
## 시스템 콜

  * 시스템 콜 또는 시스템 호출 인터페이스
  * 운영체제가 운영체제 각 기능을 사용할 수 있도록 '시스템 콜' 이라는 명령 또는 함수를 제공한다.
  * API 내부에는 시스템콜을 호출하는 형태로 만들어지는 경우가 대부분이다.
    - Users, Application -> Library or API(각 언어별) -> System Call(운영체제가 제공하는 함수) -> Operating System -> Hardware

---

## 운영체제를 만든다면 ?

  1. 운영체제를 개발한다.(kernel)
  2. 시스템 콜을 개발
  3. C API(library) : 시스템 콜 호출을 위하여
  4. Shell 프로그램 : 사용자에게 운영체제의 기능과 서비스를 제공하기 위하여
  5. 응용 프로그램 개발

---

## 운영체제와 시스템콜

  * 시스템콜을 정의 예
    - POSIX API (UNIX 계열),윈도우 API
    - Mac OS도 POSIX API를 표준으로 API를 제공하고 있다.

  > API: 각 언어별 운영체제 기능 호출 인터페이스 함수
  > 시스템콜: 운영체제 기능을 호출하는 함수

  ---

## 정리

  * 운영체제는 컴퓨터 하드웨어와 응용 프로그램을 관리한다.
  * 사용자 인터페이스를 제공하기 위해 쉘 프로그램을 제공한다.
  * 응용 프로그램이 운영체제 기능을 요청하기 위해서, 운영체제는 시스템콜을 제공한다.
    + 보통 시스템 콜을 직접 사용하기 보다는, 해당 시스템 콜을 사용해서 만든 각 언어별 라이브러리(API)를 사용한다.

---

# 운영체제 구조

---
## CPU Protection Rings
  * CPU도 권한 모드라는 것을 가지고 있다.
    + 사용자 모드(User mode)
    + 커널 모드(kernel mode) : 특권 명령어 실행과 원하는 작업 수행을 위한 자원 접근을 가능케 하는 모드

![CPU_Protection_Rings](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Priv_rings.svg/300px-Priv_rings.svg.png)
> 출처: 위키피디아
> 커널(kernel)이란? 사전적 의미: 알맹이, 핵심 -> OS의 핵심을 의미
> 쉘(Shell) 이란? 사전적 의미 : 껍데기

---

## CPU Protection Rings

  * 두가지 모드
    + 사용자 모드(User mode) : 응용 프로그램이 사용 (CPU Protection ring Level 3)
    + 커널 모드(kernel mode) : OS가 사용 (CPU Protection ring Level 0 : 커널이 사용 , 1~2 : OS가 사용)
      - '파일에서 데이터 가져오기' : 응용 프로그램이 파일에서 데이터 가져오기 명령을 내리면 API 안의 시스템 콜을 통해서 디스크 안의 파일에서 데이터를 찾아 응용 프로그렘에게 반환한다 (커널 영역)

---

## 시스템콜은 커널 모드로 실행

  * 커널 모드에서만 실행 가능한 기능들이 있음 (운영체제 내에 구성 해놓는 것)
  * 커널 모드로 실행하려면, 반드시 API 내의 시스템 콜을 사용해야 함(거쳐야함) (응용 프로그램이 그 기능을 사용하려면 시스템 콜을 사용하여 커널 모드로 실행해야함)
  * 시스템 콜은 운영체제 제공

---

## 사용자 모드와 커널 모드

  * 함부로 응용 프로그램이 전체 컴퓨터 시스템을 해치지 못함
  * 주민등록등본은 꼭 동사무소 또는 민원 24(정부 사이트)에서 특별한 신청서(시스템 콜)를 써야만 발급 --> 사용자 모드
    + 동사무소 직원분들은 특별한 권한을 가지고 , 주민등록등본 출력 명령을 실행 --> 커널 모드

---

* 응용 프로그래머와 시스템 프로그래머
  - 응용 프로그래머 : 운영체제에서 만들어준 API를 가지고 응용 프로그램을 만드는 개발자
  - 시스템 프로그래머 : 운영체제/Shell/API/System call 을 개발하는 개발자

---

## code example1

> #include ~~
int main(){
  int fd; // 이까지는 사용자 모드
  fd = open("data.txt",O_RDONLY); // 해당 파일은 저장매체에 저장되어 있으므로 접근하려면 커널모드로 접근해야함. (open()이라는 API 시스템콜 호출)
}

---

## code example2

> #include <unistd.h>
main(){
  open()} --> 함수 호출

> 헤더파일(해당 API(open)의 시스템 콜을 사용하기위해) unistd.h 파일 -> open 선언

> 커널 영역 : open()이 호출되면 sys_open() (시스템 콜) 함수를 호출한다


---

## 정리

  * 운영체제는 **시스템 콜** 을 제공
  * 프로그래밍 언어별로 운영체제 기능을 활용하기 위해, 시스템 콜을 기반으로 **API** 제공
  * 응용 프로그램은 운영체제 기능 필요시, 해당 **API** 를 사용해서 프로그램을 작성
  * 응용 프로그램이 실행되서, 해당 운영체제 기능이 필요한 **API** 를 호출하면 시스템 콜이 호출되서 **커널모드로 변경되어** OS 내부에서 해당 명령이 실행되고, 다시 응용 프로그램으로 돌아간다.


---

## 프로세스 스케쥴링
### 배치 처리 시스템, 시분할 시스템, 멀티 태스킹

---

## 배치 처리 시스템

  * 자동으로 다음 응용 프로그램이 이어서 실행될 수 있도록 하는 시스템 (Batch Processing) = > Queue 와 같은 동작 (First in First out)

---

## 배치 처리 시스템과 시분할 시스템/멀티 프로그래밍

  * 배치 처리 시스템은 여러 프로그램을 순차적으로 실행시킬 수 있도록 하는 요구사항 때문에 등장함
    + 어떤 프로그램은 실행시간이 길어서 , 다른 프로그램이 되기 까지 많은 시간이 소요됨.
    + MP3를 들으면서(mp3도 cpu에 올라가서 음악을 재생시키는 동작이 필요함) , 문서 작성을 하고싶을때 ,
      - 배치 처리 시스템은 두 가지를 동시에 실행 하는 것이 불가능함.(동시에 여러 응용 프로그램 실행 불가)
    + 여러 사용자가 동시에 하나의 컴퓨터를 쓰는 것이 불가능함. (다중 사용자 지원x)

  > 이러한 이유들 때문에 멀티 프로그래밍 / 시분할 시스템이 나왔다.
---

## 시분할 시스템

  * 시분할 시스템 : 다중 사용자 지원을 위해 컴퓨터 응답 시간을 최소화 하는 시스템

---

## 멀티 태스킹

  * 멀티 태스킹 : 단일 CPU에서 여러 응용 프로그램이 동시에 실행되는 것 처럼 보이도록 하는 시스템
    + MP3 음악을 들으며 문서 작성을 한다. (아주 짧은 시간(예를 들어 0.001초)에 mp3 파일을 잠깐 실행시키는데 문서 작성에서 키보드를 쳐서 그 딜레이를 캐치할 수 있는 사람은 없다)

---

## 실제 멀티 태스킹

  * 1000 밀리초(ms) = 1초
  * 10 ~ 20ms 단위로도 실행 응용 프로그램이 바뀐다.
  * 사용자에게는 동시에 실행되는 것처럼 보인다.

---

## 멀티 태스킹과 멀티 프로세싱

  ![multi_processing](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRO0oeHNKoYdDxWxaRK-CB4ZpD200zHZifYKPuxRTni297acObo)

  ![multi_tasking](data:image/png;base64,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)

  * 출처 : http://donghoson.tistory.com/15
  * 멀티 태스킹 : 단일 CPU
  * 멀티 프로세싱 : 여러 CPU에 하나의 프로그램을 병렬로 실행해서 실행 속도를 극대화하는 시스템

---

## 정리

  * 배치 처리 시스템
  * 시분할 시스템(다중 사용자 지원, 응답시간 최소화)
  * 멀티 태스킹(동시에 실행하는 것 처럼 보이도록)
  * 멀티 프로세싱(여러 CPU에 하나의 프로그램을 병렬로 실행시키는 시스템)

---

## 멀티 프로그래밍

  * 최대한 CPU를 많이 활용하도록 하는 시스템
    - 시간 대비 CPU 활용도를 높임
    - 응용 프로그램을 짧은 시간 안에 실행 완료를 시킬 수 있음

  * 응용 프로그램은 온전히 CPU를 쓰기보다, 다른 작업을 중간에 필요로 하는 경우가 많음
    - 응용 프로그램이 실행되다가 저장매체로 부터 파일을 읽는다.
    - 응용 프로그램이 실행되다가 프린팅을 한다.
---

## Code example
> fd = open("data.txt",O_RDONLY)
[1] open() 시스템 콜 호출 -> [2] 커널 모드로 전환 -> [3] open() 함수를 처리하는 sys_open()커널 함수 호출 -> [4] 파일 열기 레벨로 연산 수행(저장매체로 부터 읽음)(파일 읽기 수행 결과 파일 디스크럽터 (fd) 반환) -> [5] 사용자 모드로 전환 -> [6] open()함수 이후의 프로그램을 계속해서 실행


---

## 메모리 계층 - 컴퓨터 구조 복습
![memory_cycle](http://computationstructures.org/lectures/caches/slides/Slide21.png)
* 응용프로그램이 중간에 파일에 접근을 해야한다면 저장매체 Flash Drive(SSD), Hard Disk(HDD)로 넘어가면서 Access time이 상당히 오래 걸림을 알수 있음.( cycle 단위부터가 다름)
* 그러므로 응용 프로그램이 저장매체에 접근할 때 CPU에게 다른 일을 시키는 것이 CPU 이용률을 높일 수 있음
* 출처 : http://computationstructures.org/lectures/caches/caches.html

---

## System bus - 컴퓨터 구조
![DMA_System_Bus](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQVHcjxPi73lvyMS0f-O1OdgQDGwacNuNQf2C7yZk09BZM6-Klc)
* 그래서 컴퓨터 구조에는 저장 매체에 접근할 수 있는 DMA라는 장치를 둬서 저장 매체에는 DMA가 접근해서 데이터를 가져오고 그 동안 CPU는 다른 일을 수행한다!

---

## 정리

  > 실제로는 시분할 시스템, 멀티 프로그래밍, 멀티 태스킹이 유사한 의미로 통용된다.

  * 핵심
    - 여러 응용 프로그램 실행을 가능토록 함
    - 응용 프로그램이 동시에 실행되는 것처럼 보이도록 함
    - CPU를 쉬지 않고 응용 프로그램을 실행토록 해서, 짧은 시간 안에 응용 프로그램이 실행완료될 수 있도록 함.
    - 컴퓨터 응답 시간도 짧게 해서, 다중 사용자도 지원

  * 정리
    - 시분할 시스템: 다중 사용자 지원, 컴퓨터 응답시간을 최소화 하는 시스템
    - 멀티 태스킹: 단일 CPU에서 여러 응용 프로그램을 동시에 실행하는 것 처럼 보이게하는 시스템
    - 멀티 프로세싱: 여러 CPU에서 하나의 응용프로그램을 병렬로 실행하게 해서, 실행속도를 높이는 기법
    - 멀티 프로그래밍: 최대한 CPU를 일정 시간당 많이 활용하는 시스템

---

# 스케줄링 알고리즘
## - 스케줄링 알고리즘 기본
---
## 프로세스(process)란?
  * 실행 중인 프로그램은 프로세스라고 함
    - 프로세스 : 메모리에 올려져서, 실행 중인 프로그램
    - 코드 이미지(바이너리) : 실행 파일, 예 : ELF format
> 프로세스라는 용어는 작업,task,job 이라는 용어와 혼용

  * 응용프로그램 != 프로세스
    - 응용 프로그램은 여러 개의 프로세스로 이루어질 수 있음
  * 하나의 응용 프로그램은 여러 개의 프로세스(프로그램)가 상호작용을 하면서 실행될 수도 있음

> 간단한 C/C++ 프로그램을 만든다면 -> 하나의 프로세스
> 여러 프로그램을 만들어서, 서로 통신하면서 프로그램을 작성할 수도 있음(IPC 기법)

---

## 스케쥴러와 프로세스
> 스케줄러 : 프로세스 실행을 관리

---

## 스케쥴링 알고리즘

> 어느 순서대로 프로세스를 실행시킬까?

  * 목표
    - 시분할 시스템 예: 프로세스 응답시간을 가능한 짧게
    - 멀티 프로그래밍 예 : CPU 활용도를 최대로 높여서, 프로세스를 빨리 실행

---

## FIFO 스케쥴러

> 프로세스가 저장매체를 읽는다든지, 프린팅을 한다던지 하는 작업 없이, 쭉 CPU를 처음부터 끝까지 사용한다.

  * 가장 간단한 스케쥴러(배치 처리 시스템)
  * FCFS(First Come First Served) 스케쥴러라고도 불림

![FIFO_Scheduler](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSBWBfdR2Wd70_4a05OZy2JJt_6c0eoZxaQuxYdYaKf6xawolUh)
  * 출처 : http://karhem.tistory.com/38

  * FIFO는 자료구조 (QUEUE)와 아주 유사함.
![QUEUE](https://t1.daumcdn.net/cfile/tistory/2252373557CA885B0A)
  * 출처 : http://leanq.tistory.com/category/%EA%B0%9C%EB%B0%9C/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%2C%EC%9E%90%EB%A3%8C%EA%B5%AC%EC%A1%B0

---

## 최단 작업 우선(SJF) 스케쥴러

  * SJF(Shortest Job First) 스케쥴러
    - 가장 프로세스 실행시간이 짧은 프로세스부터 먼저 실행시키는 알고리즘
![SJF_Scheduler](https://image.slidesharecdn.com/random-130303063329-phpapp02/95/-18-638.jpg?cb=1362292623)
  * 출처 : https://www.slideshare.net/jeiger/ss

---
## RTOS , GPOS

  * RealTime OS(RTOS) : 응용 프로그램 실시간 성능 보장을 목표로 하는 OS
    - 정확하게 프로그램 시작, 완료 시간을 보장 : 공정등에 사용
    - Hardware OS, Software OS
  * General Purpose OS(GPOS) : 프로세스 실행시간에 민감하지 않고, 일반적인 목적으로 사용되는 OS
    - 예 : Windows, Linux 등

---
## 우선순위 기반 스케쥴러
  * Priority-Based 스케쥴러
    - 정적 우선 순위
      + 프로세스마다 우선 순위를 미리 지정
    - 동적 우선 순위
      + 스케쥴러가 상황에 따라 우선순위를 동적으로 변경
---
## Round Robin 스케쥴러
* 기본적으로 FIFO 스케쥴링 알고리즘을 취하지만, 할당하는 시간이 정해져있어서 시분할 시스템으로 구성된다.
![Round_Robin](https://image.slidesharecdn.com/random-130303063329-phpapp02/95/-21-638.jpg?cb=1362292623)
* 출처 : https://www.slideshare.net/jeiger/ss

---
## 정리
  * 다양한 기본 스케쥴링 알고리즘
    - FIFO(FCFS) 스케쥴링 알고리즘 (배치 처리 시스템)
    - 최단 작업 우선(SJF) 스케쥴링 알고리즘
    - 우선순위 기반 스케쥴링 알고리즘
      + 정적 우선 순위, 동적 우선 순위
    - Round Robin 스케쥴링 알고리즘
      + 시분할 시스템 기반

---

## 프로세스 상태와 스케쥴링
  * 멀티 프로그래밍: CPU 활용도를 극대화하는 스케쥴링 알고리즘
  * Wait : 간단히 저장매체로부터 파일 읽기를 기다리는 시간으로 가정
![Wait](https://t1.daumcdn.net/cfile/tistory/2103FF375949D3C216)

* 출처 : http://robodream.tistory.com/556

---
## 프로세스 상태
  * running state : 현재 CPU에서 실행 상태
  * ready state : CPU에서 실행 가능 상태(실행 대기 상태)
  * block state : 특정 이벤트 발생 대기 상태(예 : 저장 매체(파일 읽기))
    - CPU가 일을 하지 않고 있을때를 idle 상태라고 함.
![status_process](https://t1.daumcdn.net/cfile/tistory/2515314C56BF379A05)

---

## 선점형과 비선점형 스케쥴러
  * 선점형 스케쥴러(Preemptive Scheduling)
    - 하나의 프로세스가 다른 프로세스 대신에 프로세서(CPU)를 차지 할 수 있음
    - 프로세스 running 중에 스케쥴러가 이를 중단시키고, 다른 프로세스로 교체 가능
  * 비선점형 스케쥴러(Non-preemptive Scheduling)
    - 하나의 프로세스가 끝나지 않으면 다른 프로세스는 CPU를 사용할 수 없음
    - 프로세스가 자발적으로 blocking 상태로 들어가거나, 실행이 끝났을 때만, 다른 프로세스로 교체 가능

---

## 스케쥴러 구분
  * FIFO(FCFS),SJF,Priority-based는 어떤 프로세스를 먼저 실행시킬지에 대한 알고리즘
  * RoundRobin 은 시분할 시스템을 위한 기본 알고리즘(선점형 스케쥴러)

---

## 렉? 마우스/ 키보드 반응이 느린경우
> 스케쥴러가 해결해야하는 이슈! 다양하고 복잡한 스케쥴링 알고리즘 필요

  * 리눅스 스케쥴러 : O(1),CFS 와 같이 다양한 방식으로 변경 시도 중
    - 인터렉티브(쉘), IO, CPU 중심 프로세스로 미리 구분할 수 있다면 보다 개선된 스케쥴링이 가능함
