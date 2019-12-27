// c022 : 10783 - Odd Sum
#include <cstdio>

int main()
{
	int t;
	scanf("%d", &t );
	for( int i=1 ; i<=t ; i++ )
	{
		int a, b;
		scanf("%d%d", &a , &b );
		if( a==b )
		{
			if( a%2==0 )
				printf("Case %d: 0\n", i );
			else
				printf("Case %d: %d\n", i , a );
			continue;
		}
		if( a<b )
		{
			if( a%2==0 )
				a++ ;
			if( b%2==0 )
				b-- ;
		}
		int n = (b-a)/2 + 1 ;

		printf("Case %d: %d\n", i , n*( a+b )/2 );
	}
	return 0;
}