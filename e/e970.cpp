// e970: 1. 粉專抽獎 (Lucky Draw)
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int n, temp, sum = 0 ;
	scanf("%d", &n );

	vector<int> v;
	v.push_back(0);
	for( int i=0 ; i<n-1 ; i++ )
	{
		scanf("%d", &temp );
		v.push_back( temp );
	}
	scanf("%d", &v[0] );

	for( int i=1 ; i<n ; i++ )
	{
		if( i%v[0]==1 )
			sum += v[i] ;
	}
	if( n%v[0]==1 )
		sum += v[0] ;

	printf("%d %d\n", ( sum%n )*(sum%n!=0) + n*(sum%n==0) , v[ sum%n ] );
	return 0;
}