// d827 : 買鉛筆
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		printf("%d\n", 50*(n/12) + 5*(n%12) );
	}
	return 0;
}