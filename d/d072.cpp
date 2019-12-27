// d072 : 文文的求婚--續集 (Case 版)
// 簡潔版
#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n );
	for( int i=1 ; i<=n ; i++ )
	{
		int year;
		scanf("%d", &year);
		if( year%400 == 0 )
			printf("Case %d: a leap year\n", i );
		else if( year%100 == 0 )
			printf("Case %d: a normal year\n", i );
		else if( year%4 == 0 )
			printf("Case %d: a leap year\n", i );
		else
			printf("Case %d: a normal year\n", i );
	}
	return 0;
}