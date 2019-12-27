// a799 : 正值國
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
		printf("%d\n", n*(n>0) + -n*(n<0) );
	return 0;
}