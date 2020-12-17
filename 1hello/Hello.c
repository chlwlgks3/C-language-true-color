#include <stdio.h>


void main()
{
    printf("이름 : 홍길동\n전화번호 : 010-1234-5678\n");

	printf("반가워, c언어! 나는 홍길동이야~~!\n");
	/*
	 연습 해보기
	 1. 아래와 같이 출력되도록 코드 작성
	 반가워, c언어! 나는 홍길동이야~~!

	 2.아래와 같이 출력되도록 코드 작성 
	 이름 : 홍길동 
	 전화번호 : 010-1234-5678
	*/

}

//1.주석(comment)
// 컴파일러가 소스코드를 읽을 때 무시하는 문장( 프로그램 수행에 영향이없다.)
// 코드에 설명을 달아놓을때 사용. (필수!)
//    한줄 주석 : //
//    여러줄 주석 : /* 로 주석을 열고 */로 주석을 닫는다. 그사이 모든 내용이 코멘트.
/*
           여러 줄 주석 영역
		   열었으면 꼭 닫아주어야함.
*/

/*
       2.들여쓰기
             Tab 키를 누르면 일정간격만큼 띄어쓰기가 한 번에 된다.
             코드를 작성할 때, 같은라인에 맞도록 들여쓰기를 잘해야 알아보기좋다.
             >들여쓰기가 이상해도 프로그램 수행에 영향은 없다.
*/

/*

        Hello.c  내용 분석
		1.#include <stdio.h>
		  #include : 컴파일 과정에서 특정파일을 이 소스파일에 포함시키는 명령어

		  <stdio.h> : standard input/output 헤더(header)파일
					  표준 입출력에 대한 내용이 정의되어 있는 파일
					  표준 입출력?
					        콘솔(cmd/검정창)에 내용을 출력하거나 입력받는것

							
          2. void main() {....}
		     - main() 함수
			   > 함수 : 특정 행위를 하기위해 만들어 놓은 기능
			   *** main()함수는 c언어에서 특별하다.

			   >프로그램의 시작이자 끝
			   >>main 함수에 작성된 코드들이 프로그램 실행 시 수행
			   >>main에 작성된 코드들의 실행이 끝나면 프로그램이 종료

			   >반드시 프로그램에는 하나의 main()함수가 존재해야하며,
			   한 프로젝트에 main()함수가 여러개 일 수 없다.

			   -{....}
			   >main()함수의 수행문(몸체)
			     >> 블럭 또는 지역 이라고 부른다.
			   >{}안에 코드를 작성하면 '하나의 묶음'으로 본다.
			   >main()의 {}블럭이 끝나면, 프로그램이 종료된다.

			   -void
			     >main() 함수가 끝났을 때, 반환(return)할 게 없다.
				 >int main() {...}처럼 만들게 되면 수행문의 끝에 return 0; 와 같이 작성을 해야한다. (불필요)
				 >void main()으로 하면 return 0; 적어줄 필요없음. 단 int main으로하면 return 0; 해주어야한다.

				 
		  3.printf("Hello World\n");
		  -결과:Hello World 라고 콘솔 화면에 출력
		  -printf() : 표준 출력 함수
			>stdio.h 파일에 정의되어 있다.
		  -문장의 끝에 세미콜론(;)을 붙여준다.
		  -\n : 줄바꿈을 하는 특수한 기능 가진 문자
*/
			
/*
프로젝트 만들기
1.파일 -새로만들기 -프로젝트 
2.visual C++ -> Windows 데스크톱 --> windows 데스크톱 마법사 
  --> 빈프로젝트 체크 --> 나머지체크 해제 --> 확인

  소스파일 추가
  1.솔루션 탐색기에서 (없으면 보기메뉴에서 솔루션탐색기 클릭)
  2.'소스파일'폴더 모양 우클릭 -> 추가 ->새 항목
  3. c++ 파일 항목 선택
  4.파일명.c --> .c 붙이지 않으면 자동으로 .cpp 파일이 된다.
     > .c파일 = C언어 코드
	 > .cpp파일 = C++코드
	 > 컴파일시 처리되는게 다르다.
*/
            