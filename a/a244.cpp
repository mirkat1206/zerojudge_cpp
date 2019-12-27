// a244 : 新手訓練 ~ for + if
#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n );
	while( n-- )
	{
		long long int a, b, c;
		scanf("%lld%lld%lld", &a , &b , &c );

		if( a==1 )
			printf("%lld\n", b+c );
		else if( a==2 )
			printf("%lld\n", b-c );
		else if( a==3 )
			printf("%lld\n", b*c );
		else
			printf("%lld\n", b/c );
	}
	return 0;
}