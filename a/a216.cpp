// a216 : 數數愛明明
#include <cstdio>
#define N 30010

int main()
{
	// f[n] = n + f[n-1], g[n] = f[n] + g[n-1], f[1] = g[1] = 1
	// f[i], g[i] is on day i !!!
	long long int f[N] = { 0 , 1 , 3 }, g[N] = { 0 , 1 } ;
	for( int i=3 ; i<N ; i++ )
	{
		f[i] = i + f[i-1] ;
		g[i-1] = f[i-1] + g[i-2] ;
	}

	int n;
	while( scanf("%lld", &n )!=EOF )
		printf("%lld %lld\n", f[n] , g[n] );

	return 0;
}