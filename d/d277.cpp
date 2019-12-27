// d277 : 矩形对角线
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		if( n%2==0 )
			printf("%d\n", n );
		else
			printf("%d\n", n-1 );
	}
	return 0;
}