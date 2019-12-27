// b513 : 判斷質數-商競103
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

	int n;
	while( scanf("%d", &n )!=EOF )
		while( n-- )
		{
			int x;
			scanf("%d", &x );
			if( is_prime(x) )
				printf("Y\n");
			else
				printf("N\n");
		}
	return 0;
}