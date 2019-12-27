// a225 : 明明愛排列
#include <cstdio>
#include <cstring>
#include <algorithm>
#define N 1010
using namespace std;

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int input[N];
		for( int i=0 ; i<n ; i++ )
			scanf("%d", &input[i] );

		for( int j=0 ; j<10 ; j++ )
		{
			int cnt = 0 , buf[N] ;
			for( int i=0 ; i<n ; i++ )
			{
				if( input[i]%10==j )
					buf[cnt++] = input[i] ;
			}
			sort( buf , buf+cnt );
			for( int i=cnt-1 ; i>=0 ; i-- )
				printf("%d ", buf[i] );
		}
		printf("\n");
	}
	return 0;
}