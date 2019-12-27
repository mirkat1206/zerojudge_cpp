// a111: 12149 - Feynman
#include <cstdio>
#define N 105

int ans[ N ] = {0};

int main()
{
	ans[1] = 1 ;
	for( int i=2 ; i<=100 ; i++ )
		ans[i] = ans[i-1] + i*i ;
	int n;
	while( scanf("%d", &n )!=EOF && n!=0 )
	{
		printf("%d\n", ans[n] );
	}
	return 0;
}