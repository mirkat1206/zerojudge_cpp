// b936: Kevin 愛橘子
#include <cstdio>
#include <map>
using namespace std;

long long int foo(long long int n, long long int m)
{
	if( n<m )
		return 0 ;
	if( n<2*m )
		return 1 ;
	
	if( n%2==0 )
		return 2*foo( n/2 , m ) ;
	else
		return foo( (n-1)/2 , m ) + foo( (n+1)/2 , m ) ;
}

int main()
{
	long long int m, n;
	while( scanf("%lld%lld", &n , &m )!=EOF )
	{
		printf("%lld\n", foo( n , m ) );
	}
	return 0;
}