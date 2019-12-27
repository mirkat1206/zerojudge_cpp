// a867 : 7. Minelayer
#include <cstdio>
#define BOOM 1000

int main()
{
	char buf;

		int map[20][40] = {0} ;
		for( int i=1 ; i<=15 ; i++ )
			for( int j=1 ; j<=30 ; j++ )
			{
					do
					{
						scanf("%c", &buf );
					}while( buf!='.' && buf!='*' );

				if( buf=='*' )
					for( int x=-1 ; x<=1 ; x++ )
						for( int y=-1 ; y<=1 ; y++ )
						{
							if( x==0 && y==0 )
								map[ i+x ][ j+y ] = BOOM ;
							else
								map[ i+x ][ j+y ]++ ;
						}
			}
		for( int i=1 ; i<=15 ; i++ )
		{
			for( int j=1 ; j<=30 ; j++ )
			{
				if( map[i][j]>=BOOM )
					printf("*");
				else if( map[i][j]==0 )
					printf(".");
				else
					printf("%d", map[i][j] );
			}
			printf("\n");
		}
	
	return 0;
}