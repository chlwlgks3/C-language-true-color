#include <stdio.h>

int SelectLanguage();

void main()
{
	/*
		출력결과가 나오도록 함수 완성하기

		[출력결과]
		1. C언어
		2. JAVA
		3. PYTHON
		공부할 언어 코드를 입력하세요 : 1
		선택한 언어 코드는 1번 입니다.
	*/
	int iLanguage = 0;

	iLanguage = SelectLanguage();

	printf("선택한 언어 코드는 %d번 입니다.\n", iLanguage);
}

int SelectLanguage()
{
	int iNum;
	printf("1. C언어\n2.JAVA\n3.PYTHON\n");
	printf("공부할 언어 코드를 입력하세요: ");
	scanf("%d", &iNum);
	return iNum;
}
