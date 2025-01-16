#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 输入1-5 输出 weekday
	// 输入6、7 输出 weekend
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
	default://前面的case语句全部都没有匹配上时执行
		printf("输入错误");
		break;
	}

	return 0;
}

//switch case语句，case后如果没有遇见break语句，那么就会继续向下执行