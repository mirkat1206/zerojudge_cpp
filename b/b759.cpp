// b759 : 我明明就有說過= =
#include <cstdio>
#include <cstring>
#define N 1000100

int main()
{
	char input[N];
	while( scanf("%s", input )!=EOF )
	{
		for( int i=0 ; i<strlen(input) ; i++ )
		{
			for( int j=i ; j<strlen(input) ; j++ )
				printf("%c", input[j] );
			for( int j=0 ; j<=i-1 ; j++ )
				printf("%c", input[j] );
			printf("\n");
		}
	}
	return 0;
}