// c315 : I, ROBOT 前傳
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int a, b, x = 0, y = 0 ;
		while( n-- )
		{
			scanf("%d%d", &a , &b );
			if( a==0 )
				y += b ;
			else if( a==1 )
				x += b ;
			else if( a==2 )
				y -= b ;
			else
				x -= b ;
		}
		printf("%d %d\n", x , y );
	}
	return 0;
}