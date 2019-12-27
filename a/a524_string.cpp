// a524: 手機之謎
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int have_used[10], n;
char ans[20];

void answer(int cnt)
{
	if( cnt==n )
	{
		ans[n] = '\0';
		printf("%s\n", ans );
		return ;
	}

	for( int i=n ; i>=1 ; i-- )
		if( !have_used[i] )
		{
			ans[cnt] = i + '0' ;
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