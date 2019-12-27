// d212 : 東東爬階梯
#include <cstdio>
#define N 105

int main()
{
	long long int n, ans[N] = { 0 , 1 , 2 } ;
	for( int i=3 ; i<=100 ; i++ )
		ans[i] = ans[i-1] + ans[i-2] ;
	while( scanf("%lld", &n )!=EOF )
	{
		printf("%lld\n", ans[n] );
	}
	return 0;
}