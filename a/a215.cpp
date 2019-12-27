// a215 : 明明愛數數
#include <cstdio>

int main()
{
	int m, n;
	while( scanf("%d%d", &n , &m )!=EOF )
	{
		int sum = n, cnt = 1 ;
		while( sum<=m )
		{
			n++ ;
			sum += n ;
			cnt ++ ;
		}
		printf("%d\n", cnt );
	}
	return 0;
}