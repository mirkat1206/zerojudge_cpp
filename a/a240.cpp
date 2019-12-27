// a240: 第一題 ：1 / 17 小數第 n 位
#include <cstdio>
#define N 170100

int main()
{
	int ans[N] = {0}, cnt = 1, x = 1, div = 17 ;
	while( cnt<N )
	{
		x *= 10 ;
		ans[ cnt ] += ans[ cnt-1 ] + x/div ;
		x %= div ;
		cnt++ ;
	}
	int m;
	scanf("%d", &m );
	while( m-- )
	{
		int n;
		scanf("%d", &n );
		printf("%d %d\n", ans[n] - ans[n-1] , ans[n] );
	}
	return 0;
}