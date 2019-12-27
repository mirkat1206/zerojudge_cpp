// d471: 0 與 1 的遊戲
#include <cstdio>
#define N 20

int output[N], n;

void ans(int cnt, int i)
{
	if( cnt==1 )
	{
		output[i] = 0 ;
		for( int j=0 ; j<n ; j++ )
			printf("%d", output[j] );
		printf("\n");
		output[i] = 1 ;
		for( int j=0 ; j<n ; j++ )
			printf("%d", output[j] );
		printf("\n");
	}
	else
	{
		output[i] = 0 ;
		ans( cnt-1 , i+1 );
		output[i] = 1 ;
		ans( cnt-1 , i+1 );
	}
}

int main()
{
	while( scanf("%d", &n )!=EOF )
	{
		ans( n , 0 );
	}
	return 0;
}
