// d563 : 等值首尾和
#include <cstdio>
#define N 100100

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int num[N];
		for( int i=0 ; i<n ; i++ )
			scanf("%d", &num[i] );

		int str = 0, end = n-1 ;
		int dif = num[str] - num[end], cnt = 0 ;
		while( str<n && end>=0 )
		{
			if( dif==0 )
			{
				cnt++ ;
				dif += num[++str] - num[--end] ;
			}
			else if( dif<0 )
				dif += num[++str] ;
			else	// dif>0
				dif -= num[--end] ;
		}
		printf("%d\n", cnt );
	}
	return 0;
}