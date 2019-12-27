// a042 : 平面圓形切割
#include <cstdio>

int main()
{
	int n; 
	while( scanf("%d", &n )!=EOF )
	{
		if( n==0 )
			printf("1\n");
		else
			printf("%d\n", (n*n-n+2) );
	}
	return 0;
}