// e968: 2. 班級名單 (Student list)
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n, a, b, c;
	scanf("%d%d%d%d", &n , &a , &b , &c );
	for( int i=n ; i>0 ; i-- )
	{
		if( i!=a && i!=b && i!=c )
			printf("No. %d\n", i );
	}
	return 0;
}
