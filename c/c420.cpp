// c420 : Bert的三角形 (3)
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		for( int i=1 ; i<=n ; i++ )
		{
			for( int j=1 ; j<=(n-i) ; j++ )
				printf("_");
			for( int j=1 ; j<=( 2*i - 1 ) ; j++ )
				printf("*");
			for( int j=1 ; j<=(n-i) ; j++ )
				printf("_");
			printf("\n");
		}
	}
	return 0;
}