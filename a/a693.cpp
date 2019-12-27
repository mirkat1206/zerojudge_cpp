// a693 : 吞食天地
#include <cstdio>
#define N 100010

int main()
{
	int n, m;
	while( scanf("%d%d", &n , &m )!=EOF )
	{
		int food[N], sum[N] = {0} ;
		for( int i=1 ; i<=n ; i++ )
		{
			scanf("%d", &food[i] );
			sum[i] = sum[i-1] + food[i] ;
		}
		while( m-- )
		{
			int str, end;
			scanf("%d%d", &str , &end );
			printf("%d\n", sum[end] - sum[str-1] );	
		}
	}
	return 0;
}