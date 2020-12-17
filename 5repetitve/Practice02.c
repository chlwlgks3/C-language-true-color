/*
	1부터 200까지 3과4의 공배수를 더하다가,
	더한 수가 1000을 초과한 경우 반복문을 빠져나오고
	더해진 수와 빠져나올 때의 수를 구하기
	
	[출력결과]
	빠져나온 수 : 156
	더한 수 : 1092
*/
#include <stdio.h>

void main()
{
	int i = 0;
	int iSum = 0;

	for (i = 1; i <= 200; i++)
	{
		if ((i % 3 == 0) && (i % 4 == 0))
		{
			iSum += i;
		}
		
		if (iSum > 1000)
		{
			break;
		}
	}
	printf("빠져나온 수 :%d\n더한 수 : %d", i, iSum);

}


/* 
#include <stdio.h>

void main()
{
  int i=0;
  int iSum=0;

  for(i =1; i <201;i++)
  {
		if((i%3==0)&& (i%4==0))
		{
			iSum +=i;
		}

		if(iSum>1000)
		{
			break;
		}
  }
  printf("빠져나온수:%d\n",i);
  printf("더한 수 : %d\n",iSum);
  }
*/