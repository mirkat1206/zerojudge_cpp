// d070 : 文文的求婚--續集 (0 尾版)
// 簡潔版
#include <cstdio>

int main()
{
	int year;
	while( scanf("%d", &year)!=EOF )
	{
		if( year==0 )
			break;
		else if( year%400 == 0 )
			printf("a leap year\n");
		else if( year%100 == 0 )
			printf("a normal year\n");
		else if( year%4 == 0 )
			printf("a leap year\n");
		else
			printf("a normal year\n");
	}
	return 0;
}