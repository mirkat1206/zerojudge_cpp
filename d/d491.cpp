// d491 : 我也愛偶數 (swap 版)
#include <cstdio>

int main()
{
	int a, b;
	while( scanf("%d%d", &a , &b )!=EOF )
	{
		if( a>b )
		{
			int buf = a ;
			a = b ; 
			b = buf ;
		}
		a = a + (a%2==1) ;
		b = b - (b%2==1) ;
		int n = (b-a)/2 + 1 ;
		printf("%d\n", (a+b)*n/2 );
	}
	return 0;
}