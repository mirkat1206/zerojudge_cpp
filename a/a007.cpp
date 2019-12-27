// a007 : 判斷質數
#include <cstdio>
#include <cmath>
#define MAX 65535

int prime[MAX] = { 2 , 3 , 5 , 7 , 11 };
int cnt = 5 ;

bool is_prime(int n)
{
	for( int k=0 ; prime[k]<=sqrt(n) ; k++ )
		if( n%prime[k]==0 )
			return false ;
	return true ;
}

void build_prime()
{
	for( int i=13 ; i<=MAX ; i+=2 )
		if( is_prime(i) )
			prime[ cnt++ ] = i ;
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