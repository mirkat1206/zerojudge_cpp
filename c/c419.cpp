// c419 : Bert的三角形 (2)
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
			for( int j=1 ; j<=i ; j++ )
				printf("*");
			printf("\n");
		}
	}
	return 0;
}