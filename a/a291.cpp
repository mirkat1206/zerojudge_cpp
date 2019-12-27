// a291 : nAnB problem
#include <cstdio>

int main()
{
	int ans[4], gus[4];
	int n;
	while( scanf("%d%d%d%d", &ans[0] , &ans[1] , &ans[2] , &ans[3] )!=EOF )
	{
		scanf("%d", &n );
		while( n-- )
		{
			scanf("%d%d%d%d", &gus[0] , &gus[1] , &gus[2] , &gus[3] );
			
			int a = 0, b = 0 ;
			for( int i=0 ; i<4 ; i++ )
				if( ans[i]==gus[i] )
					a++ ;

			int cans[10] = {0}, cgus[10] = {0};
			for( int i=0 ; i<4 ; i++ )
			{
				cans[ ans[i] ]++ ;
				cgus[ gus[i] ]++ ;
			}

			for( int i=0 ; i<10 ; i++ )
				if( cans[i]>0 && cgus[i]>0 )
					b += cans[i]*( cans[i]<=cgus[i] ) + cgus[i]*( cans[i]>cgus[i] ) ;
			b -= a ;
			printf("%dA%dB\n", a , b );
		}
	}
	return 0;
}