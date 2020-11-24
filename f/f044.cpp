// f044: 2. 史萊姆生態區 (Slime)
#include <cstdio>
using namespace std;

int main()
{
	int n, t;
	while( scanf("%d%d", &n , &t )!=EOF )
	{
		int temp = ( n + t )/n , ans = 0 ;
		while( temp!=1 )
		{
			temp /= 2 ;
			ans++ ;
		}
		printf("%d\n", ans );
	}
	return 0;
}