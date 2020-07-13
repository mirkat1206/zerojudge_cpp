// a058 : MOD3
#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n );
	int buf, zero = 0, one = 0, two = 0 ;
	while( n-- )
	{
		scanf("%d", &buf );
		if( buf%3==0 )
			zero++ ;
		else if( buf%3==1 )
			one++ ;
		else
			two++ ;
	}
	printf("%d %d %d\n", zero , one , two );
	return 0;
}
