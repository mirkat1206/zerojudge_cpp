// d709 : 判断质数（一）
#include <cstdio>
#include <cmath>
#define MAX 65535

int prime[MAX] = { 2 , 3 , 5 , 7 , 11 };
int cnt = 5 ;

bool is_prime(int n)
{
	if( n==1 )
		return false ;
	
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
		if( x==0 )
			break;

		if( is_prime(x) )
			printf("0\n");
		else
			printf("1\n");
	}
	return 0;
}