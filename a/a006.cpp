// a006 : 一元二次方程式
#include <cstdio>
#include <cmath>

int main()
{
	int a, b, c;
	while( scanf("%d%d%d", &a , &b , &c )!=EOF )
	{
		if( b*b < 4*a*c )
		{
			printf("No real root\n");
			continue;
		}
		int x1 = ( -b + sqrt( b*b - 4*a*c ) )/ 2 / a ;
		int x2 = ( -b - sqrt( b*b - 4*a*c ) )/ 2 / a ;
		if( x1==x2 )
			printf("Two same roots x=%d\n", x1 );
		else
			printf("Two different roots x1=%d , x2=%d\n", x1 , x2 );
	} 
	return 0;
}