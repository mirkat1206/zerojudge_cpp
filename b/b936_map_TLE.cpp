// b936: Kevin 愛橘子
/* NOTE : this code will TLE */
#include <cstdio>
#include <map>
using namespace std;

#define LLI long long int
#define MAP map<long long int,long long int>

MAP ans;

LLI foo(LLI n, LLI m)
{
	if( ans.find(n)!=ans.end() )
		return ans[n] ;

	if( n<m )
		ans.insert( pair<LLI,LLI>( n , 0 ) );

	if( n<2*m )
		ans.insert( pair<LLI,LLI>( n , 1 ) );
	
	if( n%2==0 )
		ans.insert( pair<LLI,LLI>( n , 2*foo( n/2 , m ) ) );
	else
		ans.insert( pair<LLI,LLI>( n , foo( (n-1)/2 , m ) + foo( (n+1)/2 , m ) ) );

	return ans[n] ;
}

int main()
{
	LLI m, n;
	while( scanf("%lld%lld", &n , &m )!=EOF )
	{
		ans.clear();
		printf("%lld\n", foo( n , m ) );
	}
	return 0;
}