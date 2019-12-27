// d881 : 作業苦多
#include <cstdio>

int main()
{
	int d;
	while( scanf("%d", &d )!=EOF )
	{
		int sum = 0, buf = 1, add = 1 ;
		for( int cnt=0 ; cnt<50 ; cnt++ )
		{
			sum += buf ;
			buf += add ;
			add += d ;
		}
		printf("%d\n", sum );
	}
	return 0;
}