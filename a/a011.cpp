// a011 : 00494 - Kindergarten Counting Game
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string input;
	while( getline( cin, input ) )
	{
		int ans = 0 ;
		for( int i=0 ; i<input.length() ; i++ )
		{
			if( (input[i]>='A'&&input[i]<='Z') || (input[i]>='a'&&input[i]<='z') )
			{
				ans++ ;
				while( (input[i]>='A'&&input[i]<='Z') || (input[i]>='a'&&input[i]<='z') )
				{
					if( i<input.length() )
						i++ ;
					else
						break;
				}
				i-- ;
			}
		}
		printf("%d\n", ans );
	}
	return 0;
}