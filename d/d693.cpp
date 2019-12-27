// d693 : 最小公倍數
#include <cstdio>
#define N 110

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		if( n==0 )
			break;

		int input[N], max = 0 ;
		for( int i=0 ; i<n ; i++ )
		{
			scanf("%d", &input[i] );
			if( max<input[i] )
				max = input[i] ;
		}

		int lcm = max ;
		while( 1 )
		{
			int flag = 1 ;
			for( int i=0 ; i<n ; i++ )
				if( lcm%input[i] != 0 )
				{
					flag = 0 ;
					break;
				}
			if( flag )
				break;
			else
				lcm += max ;
		}
		printf("%d\n", lcm );
	}
	return 0;
}