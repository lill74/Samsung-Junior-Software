#include <stdio.h>

int main()
{
	char ans;
	
	printf("����� 10�� �ҳ��Դϱ�?\n");
	printf("�´ٸ� Y��, �ƴ϶�� N�� �Է��ϼ���\n");
	
	ans = getchar();
	
	if(ans == 'y' || ans == 'Y')
	{
		printf("�����10�� �ҳ��Դϴ�.\n");
	}
	else if(ans == 'n' || ans == 'N')
	{
		printf("����� 10�� �ҳడ �ƴմϴ�.\n");
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�\n");
	}
}
