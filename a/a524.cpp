// a524: 手機之謎
#include <cstdio>

int ans[10], have_used[10], n;

void answer(int cnt)
{
	if( cnt==n )
	{
		for( int i=0 ; i<n ; i++ )
			printf("%d", ans[i] );
		printf("\n");
		
		return ;
	}

	for( int i=n ; i>=1 ; i-- )
		if( !have_used[i] )
		{
			ans[cnt] = i ;
			have_used[i] = 1 ;
			answer( cnt+1 ) ;
			have_used[i] = 0 ;
		}
}

int main()
{
	while( scanf("%d", &n )!=EOF )
	{
		for( int i=1 ; i<=n ; i++ )
			have_used[i] = 0 ;
		answer( 0 );
	}
	return 0;
}