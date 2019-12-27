// b899 : 高中組-第二題：物品探測
#include <cstdio>

int main()
{
	int x[3], y[3];
	while( scanf("%d%d%d%d%d%d", &x[0] , &y[0] , &x[1] , &y[1] , &x[2] , &y[2] )!=EOF )
	{
		int len2[3] = { ( x[1] - x[0] )*( x[1] - x[0] ) + ( y[1] - y[0] )*( y[1] - y[0] ) ,
						( x[2] - x[1] )*( x[2] - x[1] ) + ( y[2] - y[1] )*( y[2] - y[1] ) ,
						( x[2] - x[0] )*( x[2] - x[0] ) + ( y[2] - y[0] )*( y[2] - y[0] ) } ;
		// 0 : 0<->1, 1 : 1<->2, 2 : 0<->2
		if( len2[0]==len2[1] )				// 1
			printf("%d %d\n", x[0] + x[2] - x[1] , y[0] + y[2] - y[1] );
		else if( len2[0]==len2[2] )			// 0
			printf("%d %d\n", x[1] + x[2] - x[0] , y[1] + y[2] - y[0] );
		else								// 2
			printf("%d %d\n", x[0] + x[1] - x[2] , y[0] + y[1] - y[2] );
	}
	return 0;
}