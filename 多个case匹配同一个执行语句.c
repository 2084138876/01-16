#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// ����1-5 ��� weekday
	// ����6��7 ��� weekend
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday");
		break;
	case 6:;
	case 7:
		printf("weekend");
		break;
	default://ǰ���case���ȫ����û��ƥ����ʱִ��
		printf("�������");
		break;
	}

	return 0;
}

//switch case��䣬case�����û������break��䣬��ô�ͻ��������ִ��