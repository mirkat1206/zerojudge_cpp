// a024 : 最大公因數(GCD), a738: 最大公约数
#include <cstdio>

int gcd(int x, int y)	// x>=y
{
	if( x%y == 0 )
		return y ;
	return gcd( y , x%y ) ;
}

int main()
{
	int a, b;
	scanf("%d%d", &a , &b );
	if( a>=b )
		printf("%d\n", gcd( a , b ) );
	else
		printf("%d\n", gcd( b , a ) );
	return 0;
}
