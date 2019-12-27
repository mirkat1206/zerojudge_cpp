// d732 : 二分搜尋法
#include <cstdio>
#define N 100010

int num[N];

int srch(int y, int str, int end)
{
	int mid = (int) ( str + end )/2 ;
	// printf("str = %d\tmid = %d\tend = %d\n", str, mid , end );

	if( num[mid]==y )
		return mid ;
	if( str>=end && num[mid]!=y )
		return 0 ;
	if( num[mid]>y )
		return srch( y , str , mid-1 ) ;
	if( num[mid]<y )
		return srch( y , mid+1 , end ) ;
}

int main()
{
	int n, k;
	while( scanf("%d%d", &n , &k )!=EOF )
	{
		for( int i=1 ; i<=n ; i++ )
			scanf("%d", &num[i] );
		while( k-- )
		{
			int x;
			scanf("%d", &x );
			printf("%d\n", srch( x , 1 ,n ) );
		}
	}
	return 0;
}