/*
	���� �Ǻ���
		���ڸ� �Է� �ް�, �� ���ڰ� ���,����,0 ���� ����ϱ�

		[��°��]
		���ڸ� �Է��ϼ��� : 10
		���
*/

#include <stdio.h>

void main()
{
	float iNum;
	
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%f", &iNum);
    printf("%s\n", iNum > 0 ? "����Դϴ�" : (iNum == 0 ? "0 �Դϴ�" : "�����Դϴ�"));
	
}