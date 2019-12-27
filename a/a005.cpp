// a005 : Eva的回家作業
#include <cstdio>

int main()
{
	int t;
	scanf("%d", &t );
	while( t-- )
	{
		int a, b, c, d;
		scanf("%d%d%d%d", &a , &b , &c , &d );
		int dif = b - a ;
		if( (c-b)==dif && (d-c)==dif )
			printf("%d %d %d %d %d\n", a , b , c , d , d+dif );
		else
			printf("%d %d %d %d %d\n", a , b , c , d , d*(b/a) );
	}	
	return 0;
}