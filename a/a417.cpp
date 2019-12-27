// a417 : 螺旋矩陣
#include <cstdio>
#define N 110

int main()
{
	int t;
	scanf("%d", &t );
	while( t-- )
	{
		int n, m;
		scanf("%d%d", &n , &m );

		int map[N][N] = {0} , cnt = 0, i = 1, j = 0 ;
		int up = 2, dn = n, lf = n, rt = 1 ;
		while( cnt<n*n )
		{
			while( j<lf )
				map[i][++j] = ++cnt ;
			lf-- ;
			while( i<dn )
				map[++i][j] = ++cnt ;
			dn-- ;
			while( j>rt )
				map[i][--j] = ++cnt ;
			rt++ ;
			while( i>up )
				map[--i][j] = ++cnt ;
			up++ ;
		}
		if( m==1 )
			for( i=1 ; i<=n ; i++ )
			{
				for( j=1 ; j<=n ; j++ )
					printf("%5d", map[i][j] );
				printf("\n");
			}
		if( m==2 )
			for( i=1 ; i<=n ; i++ )
			{
				for( j=1 ; j<=n ; j++ )
					printf("%5d", map[j][i] );
				printf("\n");
			}
	}
	return 0;
}