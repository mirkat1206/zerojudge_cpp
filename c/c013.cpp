// c013 : 00488 - Triangle Wave
#include <cstdio>

void draw(int x)
{
	for( int i=1 ; i<=x ; i++ )
	{
		for( int j=1 ; j<=i ; j++ )
			printf("%d", i );
		printf("\n");
	}
	for( int i=x-1 ; i>=1 ; i-- )
	{
		for( int j=i ; j>=1 ; j-- )
			printf("%d", i );
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int n;
	scanf("%d", &n );
	while( n-- )
	{
		int amp, fre;
		scanf("%d%d", &amp , &fre );
		for( int i=0 ; i<fre ; i++ )
			draw( amp );
	}
	return 0;
}