// d562 : 山寨版磁力蜈蚣
#include <cstdio>
#define N 110

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int num[N];
		for( int i=0 ; i<n ; i++ )
			scanf("%d", &num[i] );

		int str = 0, end = n-1 ;
		while( str<=end )
		{
			for( int i=str ; i<=end ; i++ )
				printf("%d ", num[i] );
			printf("\n");
			str++ ;
			for( int i=end ; i>=str ; i-- )
				printf("%d ", num[i] );
			printf("\n");
			end-- ;
		}
	}
	return 0;
}