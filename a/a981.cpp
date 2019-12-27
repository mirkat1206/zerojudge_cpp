// a981 : 求和問題
#include <cstdio>
#include <algorithm>
#define N 50
using namespace std;

int x[N], n;
bool is_used[N], flg;

bool addup(int to0, int str)
{
	// printf("to0 = %d\tstr = %d\n", to0 , str );
	if( to0==0 )
	{
		flg = 1 ;

		for( int j=0 ; j<str ; j++ )
			if( is_used[j] )
				printf("%d ", x[j] );
		printf("\n");
		return true ;
	}
	
	if( to0<0 )
		return false ;

	if( to0>0 )
		for( int j=str ; j<n ; j++ )
		{
			is_used[j] = 1 ;
			if( !addup( to0-x[j] , j+1 ) )
			{
				is_used[j] = 0 ;
				continue;
			}
			is_used[j] = 0 ;
		}
}

int main()
{
	int m;
	while( scanf("%d%d", &n , &m )!=EOF )
	{
		for( int i=0 ; i<n ; i++ )
			scanf("%d", &x[i] );
		sort( x , x+n );

		flg = 0 ;
		for( int i=0 ; i<n ; i++ )
		{
			is_used[i] = 1 ;
			if( !addup( m-x[i] , i+1 ) )
			{
				is_used[i] = 0 ;
				continue;
			}
			is_used[i] = 0 ;
		}
		if( !flg )
			printf("-1\n");
	}
	return 0;
}