// b266 : 矩陣翻轉
#include <cstdio>
#define N 1000

int r, c, m, matrix[N][N], buf[N][N] ;

void flip()
{
	for( int i=0 ; i<r/2 ; i++ )
		for( int j=0 ; j<c ; j++ )
		{
			int buf = matrix[i][j] ;
			matrix[i][j] = matrix[ r-1-i ][j] ;
			matrix[ r-1-i ][j] = buf ;
		}
}

void rotate()
{
	for( int i=0 ; i<r ; i++ )
		for( int j=0 ; j<c ; j++ )
			buf[i][j] = matrix[i][j] ;

	for( int i=0 ; i<r ; i++ )
		for( int j=0 ; j<c ; j++ )
			matrix[ c-1-j ][i] = buf[i][j] ;

	int buff = r ;
	r = c ;
	c = buff ;
}

int main()
{
	while( scanf("%d%d%d", &r , &c , &m )!=EOF )
	{
		for( int i=0 ; i<r ; i++ )
			for( int j=0 ; j<c ; j++ )
				scanf("%d", &matrix[i][j] );

		int opr[N];
		for( int i=0 ; i<m ; i++ )
			scanf("%d", &opr[i] );

		while( m-- )
		{
			if( opr[m] )
				flip();
			else
				rotate();
		}

		printf("%d %d\n", r , c );
		for( int i=0 ; i<r ; i++ )
		{
			printf("%d", matrix[i][0] );
			for( int j=1 ; j<c ; j++ )
				printf(" %d", matrix[i][j] );
			printf("\n");
		}
	}
	return 0;
}