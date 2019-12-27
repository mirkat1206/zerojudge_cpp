// a694 : 吞食天地二
#include <cstdio>
#define N 505

int main()
{
	int n, m;
	while( scanf("%d%d", &n , &m )!=EOF )
	{
		int food[N][N], sum[N][N] = {0} ;
		for( int i=1 ; i<=n ; i++ )
			for( int j=1 ; j<=n ; j++ )
			{
				scanf("%d", & food[i][j] ) ;
				sum[i][j] = sum[i][j-1] + food[i][j] ;
			}
		int x1, x2, y1, y2;
		while( m-- )
		{
			scanf("%d%d%d%d", &x1 , &y1 , &x2 , &y2 );
			int ans = 0 ;
			for( int i=x1 ; i<=x2 ; i++ )
				ans += sum[i][y2] - sum[i][y1-1] ;
			printf("%d\n", ans );
		}
	}
	return 0;
}