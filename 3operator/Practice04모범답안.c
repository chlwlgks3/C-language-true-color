/*
	숫자버리기 놀이
		int iNum = 4321; 일 때 연산자를 활용하여 아래와 같이 출력

		[출력결과]
		4321에서 1000자리 아래 숫자를 버린 결과 : 4000
*/

#include <stdio.h>

void main()
{
	int iNum = 4321;
	printf("%d에서 1000자리 아래 숫자를 버린 결과 : %d\n", iNum, (iNum / 1000 * 1000));
}