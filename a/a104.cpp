// a104 : 排序
#include <cstdio>
#include <algorithm>
#define N 1010
using namespace std;

int main()
{
	int n;
	while( scanf("%d", &n)!=EOF )
	{
		int input[N];
		for( int i=0 ; i<n ; i++ )
			scanf("%d", &input[i] );
		sort( input , input+n );
		for( int i=0 ; i<n ; i++ )
			printf("%d ", input[i] );
		printf("\n");
	}
	return 0;
}