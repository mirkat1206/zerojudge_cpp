// d150 : 11369 - Shopaholic
#include <cstdio>
#include <algorithm>
#define N 20100
using namespace std;

int main()
{
	int t;
	scanf("%d", &t );
	while( t-- )
	{
		int n, price[N] ;
		scanf("%d", &n );
		for( int i=0 ; i<n ; i++ )
			scanf("%d", &price[i] );
		
		sort( price , price+n );
		int ans = 0 ;
		for( int i=n-3 ; i>=0 ; i-=3 )
			ans += price[i] ;
		printf("%d\n", ans );
	}
	return 0;
}