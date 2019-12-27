// a565 : 2.p&q的邂逅
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t );
	while( t-- )
	{
		char input;
		int ans = 0, cnt_p = 0, flg = 1 ;

		do{
			input = getchar() ;
		}while( input!='p' && input!='q' && input!='.' );

		while( input=='p' || input=='q' || input=='.' )
		{
			if( input=='p' )
				cnt_p++ ;
			else if( input=='q' )
			{
				if( cnt_p>0 )
				{
					ans++ ;
					cnt_p-- ;
				}
			}
			else if( input=='.' );

			input = getchar() ;
		}
		printf("%d\n", ans );
	}
	return 0;
}

/*
2
..p..p.p...q.q
.p...qq..p.pq.p..q.qpp..qpq
*/