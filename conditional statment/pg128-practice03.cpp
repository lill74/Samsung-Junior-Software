#include <stdio.h>

int main() 
{
	char in1[10];
	char in2[10];
	
	printf("ù ��° �̸��� �Է��ϼ���. : ");
	scanf("%s", in1);
	
	
	printf("�� ��° �̸��� �Է��ϼ���. : ");
	scanf("%s", in2);
	
	if(in1[0] == in2[0] && in1[1] == in2[1])
	{
		printf("�Է��Ͻ� %s, %s �� �̸��� ������ ���Դϴ�.\n", in1, in2);
	}
	else
	{
		printf("�Է��Ͻ� %s, %s �� �̸��� ���� �ٸ��ϴ�.\n", in1, in1);
	}
}
