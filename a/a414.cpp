// a414 : 位元運算之進位篇
#include <cstdio>

int main()
{
	long long int n;
	while( scanf("%lld", &n )!=EOF )
	{
		if( n==0 )
			break;

		long long int m = n + 1 ;

		int ans = 0 ;
		while( m>0 || n>0 )
		{
			if( m%2 != n%2 )
				ans++ ;
			m /= 2 ;
			n /= 2 ;
		}
		printf("%d\n", ans-1 );
	}
	return 0;
}