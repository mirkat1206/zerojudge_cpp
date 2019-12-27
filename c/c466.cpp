// c466 : 4th CPSC Problem 2－傅趴滴
#include <cstdio>
#include <cstring>
#define N 1000100

int main()
{
	char input[N];
	while( scanf("%s", input )!=EOF )
	{
		int len = strlen(input), num = input[ len-1 ]-'0' ;
		if( num==0 )
			printf("0\n");
		else if( len%2==0 )
			printf("-%d\n", num );
		else
			printf("%d\n", num );
	}
	return 0;
}