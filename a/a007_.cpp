// a007 : 判斷質數
#include <cstdio>
#include <cmath>
#define MAX 65535

int prime[MAX] = { 2 , 3 , 5 , 7 , 11 };
int cnt = ??? ;

bool is_prime(int n)
{
	for( int k=0 ; prime[k]<=sqrt(???) ; k++ )
		if( n%prime[k]==0 )
			return ??? ;
	return ??? ;
}

void build_prime()
{
	for( int i=13 ; i<=MAX ; i+=??? )
		if( is_prime(i) )
			prime[ cnt++ ] = ??? ;
}

int main()
{
	build_prime();

	int x;
	while( scanf("%d", &x )!=EOF )
	{
		if( is_prime(x) )
			printf("質數\n");
		else
			printf("非質數\n");
	}
	return 0;
}