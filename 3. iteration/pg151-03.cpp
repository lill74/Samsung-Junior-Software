#include <stdio.h>

int main()
{
	int times = 0;
	
	printf("Ƚ���� �Է��� �ּ��� ");
	scanf("%d", &times);
	
	for(int i = 0; i < times ; i++)
	{
		for(int j = 0; j <= i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
