// a015 : 矩陣的翻轉
#include <cstdio>

int main()
{
	int m, n, input[105][105] ;
	while( scanf("%d%d", &m , &n )!=EOF )
	{
		for( int i=0 ; i<m ; i++ )
			for( int j=0 ; j<n ; j++ )
				scanf("%d", &input[i][j] );
		for( int i=0 ; i<n ; i++ )
		{
			for( int j=0 ; j<m ; j++ )
				printf("%d ", input[j][i] );
			printf("\n");
		}
	}
	return 0;
}