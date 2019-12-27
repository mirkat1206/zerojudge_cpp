// a307 : NOIP2011 1.数字反转
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		bool is_neg = 0 ;
		if( n<0 )
		{
			is_neg = 1 ;
			n *= -1 ;
		}

		int ans = 0 ;
		while( n>0 )
		{
			ans *= 10 ;
			ans += n%10 ;
			n /= 10 ;
		}
		if( is_neg )
			printf("-");
		printf("%d\n", ans );
	}
	return 0;
}