#include <stdio.h>

void main()
{
	/*
		printf의 서식문자를 이용하여 출력하기

		이름 : 홍길동
		나이 : 20세
		번호 : 010-1234-5678

			1. printf는 1개만 사용하기
			2. 나이의 숫자는 iAge 라는 변수에 담기
			2. 서식문자로 치환해야할 값
				홍길동			-> 문자열
				20				-> 숫자(정수) -> 변수
				010-1234-5678	-> 문자열
	*/
	int iAge = 20;

	printf("이름 : 홍길동\n나이 : %d세\n번호 : 010-1234-5678\n", iAge);

	printf("%c\n", 'a');
	printf("%c\n", 131);
	

}