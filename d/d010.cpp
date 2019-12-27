// d010 : 盈數、虧數和完全數
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int sum = 0 ;
		for( int i=1 ; i<=n/2 ; i++ )
			if( n%i==0 )
				sum += i ;
		if( sum>n )
			printf("盈數\n");
		else if( sum<n )
			printf("虧數\n");
		else
			printf("完全數\n");
	}
	return 0;
}