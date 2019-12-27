// b558 : 求數列第 n 項
#include <cstdio>
#define N 510

int ans[N] = {0};

void setup()
{
	ans[1] = 1 ;
	for( int i=1 ; i<500 ; i++ )
		ans[ i+1 ] = ans[i] + i ;
}

int main()
{
	setup();
	int n;
	while( scanf("%d", &n )!=EOF )
		printf("%d\n", ans[n] );
	return 0;
}