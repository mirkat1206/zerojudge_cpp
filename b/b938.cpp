// b938: kevin 愛殺殺
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int n, m, temp;
	scanf("%d%d", &n , &m );

	vector<int> people;
	people.resize( n );
	for( int i=0 ; i<n ; i++ )
		people[i] = i + 1 ;

	for( int i=0 ; i<m ; i++ )
	{
		scanf("%d", &temp );
		temp-- ;
		if( people[temp]==n )
			printf("0u0 ...... ?\n");
		else
		{
			int target = people[temp] ;
			printf("%d\n", target + 1 );
			people[temp] = people[ target ] ;
			people[ target ] = n ;
		}
	}
	return 0;
}