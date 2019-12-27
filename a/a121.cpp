// a121 : 質數又來囉
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
	for( int i=13 ; i<=MAX ; i++ )
		if( is_prime(i) )
			prime[ cnt++ ] = i ;
}

int main()
{
	build_prime();

	int a, b;
	while( scanf("%d%d", &a , &b )!=EOF )
	{
		int ans = 0 ;
		for( int i=a ; i<=b ; i++ )
			if( is_prime(i) )
				ans++ ;

		printf("%d\n", ans );
	}
	return 0;
}