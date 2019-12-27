// d058 : BASIC 的 SGN 函數
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		printf("%d\n", 0 + (n>0) - (n<0) );
	}
	return 0;
}