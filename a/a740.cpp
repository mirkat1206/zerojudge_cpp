// a740 : 质因数之和
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
		int sum = 0 ;
		for( int i=0 ; prime[i]<=sqrt(x) ; i++ )
			while( x%prime[i]==0 )
			{
				sum += prime[i] ;
				x /= prime[i] ;
			}

		if( x==1 )	
			printf("%d\n", sum );
		else
			printf("%d\n", sum + x );
	}
	return 0;
}