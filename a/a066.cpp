// a066: HNOI2002 营业额统计
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 1000000 ;

int main()
{
	int n, temp, a0, ans = 0 ;
	scanf("%d", &n );

	vector<bool> turnover;
	turnover.resize( 2*MAXN + 10 );
	fill( turnover.begin() , turnover.end() , 0 );
	scanf("%d", &temp );
	ans += temp ;
	temp += MAXN ;
	turnover[ temp ] = 1 ;
	for( int i=1 ; i<n ; i++ )
	{
		scanf("%d", &temp );
		temp += MAXN ;
		for( int j=0 ; j<MAXN ; j++ )
			if( ( temp-j>=0 && turnover[ temp-j ]==1 ) || ( temp+j<=2*MAXN && turnover[ temp+j ]==1 ) )
			{
				ans += j ;
				break ;
			}
		turnover[ temp ] = 1 ;
	}
	printf("%d\n", ans );
	return 0;
}