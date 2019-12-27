// c418 : Bert的三角形 (1)
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		for( int i=1 ; i<=n ; i++ )
		{
			for( int j=1 ; j<=i ; j++ )
				printf("*");
			printf("\n");
		}
	}
	return 0;
}