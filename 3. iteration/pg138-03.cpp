#include <stdio.h>

int main()
{
	int count = 0;
	int passwd = 1234, input = 0;
	
	while(1)
	{
		scanf("%d", &input);
		count++;
		if(input == passwd)
		{
			break;
		}
	}
	printf("���� ������ %d�� �õ� ���� Ż���Ͽ����ϴ�.\n", count);
	
	return 0;
 } 
