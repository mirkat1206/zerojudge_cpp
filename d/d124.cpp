// d124 : 3的倍数
#include <cstdio>
#include <cstring>
#define N 100000

int main()
{
	char input[N];
	while( scanf("%s", input )!=EOF )
	{
		int mod3 = 0 ;
		for( int i=0 ; i<strlen(input) ; i++ )
		{
			mod3 += input[i]-'0' ;
			mod3 %= 3 ;
		}
		if( mod3==0 )
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}