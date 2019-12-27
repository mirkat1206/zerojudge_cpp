// a022 : 迴文
#include <cstdio>
#include <cstring>
#define N 1010

int main()
{
	char input[N];
	while( scanf("%s", input )!=EOF )
	{
		bool flag = 1 ;
		for( int i=0 ; i<strlen(input)/2 ; i++ )
			if( input[i] != input[ strlen(input)-1-i ] )
			{
				flag = 0 ;
				break;
			}
		if( flag )
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}