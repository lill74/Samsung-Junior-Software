#include <stdio.h>

int main()
{
	int input = 0;
	
	while(1)
	{
		printf("�����ϰ� ���� ���ڸ� �Է��ϼ��� :");
		scanf("%d", &input);
		printf("%d �� ������ %d �Դϴ�.\n", input, input * input);
	}
	
	return 0;
}
