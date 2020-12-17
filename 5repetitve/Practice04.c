/*
	1~100 사이 정수 중, 3의 배수와 5의 배수를 역순으로 출력하기
	3과 5의 공배수는 [15] 와 같이 출력하기

	[출력결과]
	100 99 96 95 93 [90] 87 .... 5 3
*/

#include <stdio.h>

void main()
{
	
	
	int i = 0;

	for (i = 100; i >= 1; i--)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
		printf("[%d]\t" , i);
		}
		else if ((i % 3 == 0) || (i % 5) == 0)
		{
			printf("%d\t", i); 
		}
		
	}
}