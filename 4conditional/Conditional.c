// Conditional.c
/*
	조건문 
		- 주어진 조건에 만족할 때 수행하는 '제어문'

		1. if문 
			- 조건식, 수행문 

			if ( 조건식1 )
			{
				수행문1 
					> 만약(if) 조건식1이 만족(참)하면 수행문1을 수행해라!
					> 거짓이면 수행하지 않고 넘어감 
			}

			else if ( 조건식2 )
			{
				수행문2 
					> 위 조건식1이 만족하지 않고 넘어왔다면 (else)
					  만약(if) 조건식2가 만족하면 수행문2을 수행해라!
					> 무조건 if가 있어야 사용할 수 있다. --> if문에 종속된다. 
					> 여러 개 사용할 수 있다. (경우의 수가 늘어남)
			}

			else
			{
				수행문3
					> 위 조건식(들)이 만족하지 않고 넘어왔다면 (else)
					  '무조건' 수행문3을 수행해라!
					> 하나만 사용할 수 있다. (조건식이 없기 때문)
					> 무조건 if가 있어야 사용할 수 있다. --> if문에 종속된다. 
			}
			- 수행문을 수행하면, 다음 조건을 검사하지 않고 모든 조건식을 빠져나간다. 
*/

#include <stdio.h>

void main()
{
	int iAge = 0; // 지역변수
	printf("나이를 입력하세요 : ");
	scanf("%d", &iAge);

	// 조건식에는 보통 비교연산자를 사용 (참이면 1, 거짓이면 0)
	if (iAge > 19) // 조건식 
	{
		// 수행문 (새로운 지역 - 블럭{}이 새로 열림)
		int iValue = 1; // 선언(생성) : 지역/블럭의 가장 위에 위치 

		// iValue는 '지역변수' --> {} 블럭/지역 안에서 생성된 변수 
		// 지역변수는 해당 지역이 끝나면 자동으로 소멸(제거)
		printf("성인입니다.\n");

		printf("iValue = %d\n", iValue);
	}

	//printf("iValue = %d\n", iValue); // 이 위치에는 존재하지 않는 iValue


	// 비교연산의 결과 --> 0/1
	// 조건식에 정수를 넣서어 사용이 가능 
	if (1) // 1은 참 
	{
		printf("참입니다. 1\n");
	}

	if (10)
	{
		printf("참입니다. 10\n");
	}

	// 0만 아니면 모두 참 (음수도 참)
	if (-10)
	{
		printf("참입니다. -10\n");
	}

	// 0만 거짓 
	if (0)
	{
		printf("참입니다. 0\n");
	}
}