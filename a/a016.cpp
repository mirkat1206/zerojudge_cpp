// a016 : 數獨SUDOKU
#include <cstdio>

int input[10][10];

bool check_row()
{
	// printf("row!!\n");
	for( int i=1 ; i<=9 ; i++ )
	{
		int cnt[10] = {0} ;
		for( int j=1 ; j<=9 ; j++ )
			cnt[ input[i][j] ]++ ;
		for( int k=1 ; k<=9 ; k++ )
			if( cnt[k]!=1 )
				return 0;
	}
	return 1 ;
} 

bool check_col()
{
	// printf("col!!\n");
	for( int i=1 ; i<=9 ; i++ )
	{
		int cnt[10] = {0} ;
		for( int j=1 ; j<=9 ; j++ )
			cnt[ input[j][i] ]++ ;
		for( int k=1 ; k<=9 ; k++ )
			if( cnt[k]!=1 )
				return 0;
	}
	return 1 ;
} 

bool check_blk()
{
	// printf("blk!!\n");
	for( int m=1 ; m<=7 ; m+=3 )
		for( int n=1 ; n<=7 ; n+=3 )
		{
			int cnt[10] = {0} ;			
			for( int i=0 ; i<=2 ; i++ )
				for( int j=0 ; j<=2 ; j++ )
					cnt[ input[ m+i ][ n+j ] ]++ ;
				
			for( int k=1 ; k<=9 ; k++ )
				if( cnt[k]!=1 )
					return 0;
		}
	return 1;
}

int main()
{
	while( scanf("%d", &input[1][1] )!=EOF )
	{
		for( int i=1 ; i<=9 ; i++ )
			for( int j=1 ; j<=9 ; j++ )
				if( !(i==1 && j==1) )
					scanf("%d", &input[i][j] );
		if( !check_row() || !check_col() || !check_blk() )
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}