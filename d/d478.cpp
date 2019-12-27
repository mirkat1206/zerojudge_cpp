// d478 : 共同的數 - 簡易版
#include <cstdio>
#define N 10010

int num[N], m, flor, ceil;

bool bisrch(int x, int butt, int topp)
{
	int mid = ( butt + topp )/2 ;
	// printf("%d : butt = %d\ttopp = %d\tmid = %d\n", x , butt , topp , mid );

	if( butt>topp )
	{
		flor = mid + ( num[mid]<x ) ;
		return false ;
	}
	if( num[mid]==x )
	{
		flor = mid + 1 ;
		return true ;
	}

	if( num[mid]>x )
		return bisrch( x , butt , mid-1 ) ;
	if( num[mid]<x )
		return bisrch( x , mid+1 , topp ) ;
}

int main()
{
	int n;
	scanf("%d%d", &n , &m );
	while( n-- )
	{
		for( int i=0 ; i<m ; i++ )
			scanf("%d", &num[i] );

		int buf, ans = 0 ;
		flor = 0 ;		ceil = m-1 ;
		for( int i=0 ; i<m ; i++ )
		{
			scanf("%d", &buf );
			if( buf>num[m-1] )
			{
				for( int j=i+1 ; j<m ; j++ )
					scanf("%d", &buf );
				break;
			}
			else if( bisrch( buf , flor , ceil ) )
				ans++ ;
		}
		printf("%d\n", ans );
	}
	return 0;
}