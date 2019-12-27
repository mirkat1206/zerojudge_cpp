// d583 : 幼稚的企鵝
#include <cstdio>
#include <algorithm>
#define N 100100
using namespace std;

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int num[N];
		for( int i=0 ; i<n ; i++ )
			scanf("%d", &num[i] );
		sort( num , num+n );
		for( int i=0 ; i<n ; i++ )
			printf("%d ", num[i] );
		printf("\n");
	}
	return 0;
}