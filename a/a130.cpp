// a130: 12015 - Google is Feeling Lucky
#include <cstdio>
#include <iostream>
#include <string>
#define INF 1000
using namespace std;

int main()
{
	int t;
	scanf("%d", &t );
	for( int kase = 1 ; kase<=t ; kase++ )
	{
		string input[10];
		int score[10], max = -INF ;
		for( int i=0 ; i<10 ; i++ )
		{
			cin>> input[i] >> score[i] ;
			if( max<score[i] )
				max = score[i] ;
		}
		printf("Case #%d:\n", kase );
		for( int i=0 ; i<10 ; i++ )
			if( score[i]==max )
				cout<< input[i] << endl;
	}
	return 0;
}
