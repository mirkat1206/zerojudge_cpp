// a004 : 文文的求婚
// 複雜版
#include <cstdio>

int main()
{
	int year;
	while( scanf("%d", &year)!=EOF )
	{
		if( year%4 == 0 )
		{
			if( year%100 == 0 )
			{
				if( year%400 == 0 )
					printf("閏年\n");
				else
					printf("平年\n");
			}
			else
				printf("閏年\n");
		}
		else
			printf("平年\n");
	}
	return 0;
}