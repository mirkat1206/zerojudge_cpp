// c276 : 沒有手機的下課時間
#include <cstdio>

int main()
{
	char input_ans[4], input_gus[4];
	int ans[4], gus[4];
	int n;
	while( scanf("%s", input_ans )!=EOF )
	{
		for( int i=0 ; i<4 ; i++ )
			ans[i] = input_ans[i] - '0' ;
		scanf("%d", &n );
		while( n-- )
		{
			scanf("%s", input_gus );
			for( int i=0 ; i<4 ; i++ )
				gus[i] = input_gus[i] - '0' ;
			
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