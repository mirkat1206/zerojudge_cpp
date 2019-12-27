// a040 : 阿姆斯壯數
#include <cstdio>
#include <cmath>
#define N 1000010
#define NN 1000000

bool armstrong[N];

bool check(int x, int lnth)
{
	int sum = 0, a = x ;
	while( a>0 )
	{
		int buf = 1;
		for( int k=0 ; k<lnth ; k++ )
			buf *= (a%10) ;
		sum += buf ;
		a /= 10 ;
	}
	if( x==sum )
		return 1 ;
	else
		return 0 ;
}

void setup()
{
	for( int i=1 ; i<=NN ; i++ )
	{
		// 1位
		if( i<10 )
			armstrong[i] = check( i , 1 ) ;
		// 2位
		else if( i<100 )
			armstrong[i] = check( i , 2 ) ;
		// 3位
		else if( i<1000 )
			armstrong[i] = check( i , 3 ) ;
		// 4位
		else if( i<10000 )
			armstrong[i] = check( i , 4 ) ;
		// 5位
		else if( i<100000 )
			armstrong[i] = check( i , 5 ) ;
		// 6位
		else
			armstrong[i] = check( i , 6 ) ;
	}
}

int main()
{
	setup();
	int n, m;
	while( scanf("%d%d", &n , &m )!=EOF )
	{
		bool flag = 0 ;
		for( int i=n ; i<=m ; i++ )
			if( armstrong[i] )
			{
				flag = 1 ;
				printf("%d ", i );
			}
		if( flag )
			printf("\n");
		else
			printf("none\n");
	}
	return 0;
}