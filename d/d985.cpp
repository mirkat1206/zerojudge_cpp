// d985 : Gran Turismo 5
#include <cstdio>

int main()
{
	int n, m;
	while( scanf("%d", &n )!=EOF )
		for( int tr=1 ; tr<=n ; tr++ )
		{
			scanf("%d", &m );
			int a, b, min = 999999999, sum = 0, i = 0 ;
			while( i<m )
			{
				scanf("%d%d", &a , &b );
				int buf = 60*a + b ;
				if( buf<min )
					min = buf ;
				sum += buf ;
				i++ ;
			}
			printf("Track %d:\n", tr );
			printf("Best Lap: %d minute(s) %d second(s).\n", min/60 , min%60 );
			printf("Average: %d minute(s) %d second(s).\n", (sum/m)/60 , (sum/m)%60 );
		}
	return 0;
}