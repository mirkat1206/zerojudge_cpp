// e163 : 01地圖問題 1
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
using std::setfill;
#include <string>
using std::string;
#include <map>
using std::map;
#include <utility>
using std::make_pair;

const string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/" ;
map< char , int > char2int;
map< char , int >::iterator iter;

void setup()
{
	for( int i=0 ; i<64 ; i++ )
	{
		int x = i, y = 0, cnt = 1 ;
		while( x>0 )
		{
			y += (x%2) * cnt ;
			cnt *= 10 ;
			x /= 2 ;
		}
		char2int.insert( make_pair( s[i] , y ) );
	}
}

int main()
{
	setup();

	int n, m;
	while( cin>> n >> m )
	{
		m /= 6 ;
		char c;
		for( int i=0 ; i<n ; i++ )
		{
			for( int j=0 ; j<m ; j++ )
			{
				cin>> c ;
				iter = char2int.find( c ) ;
				cout<< setw(6) << setfill('0') << iter->second ;
			}
			cout<< endl;
		}
	}

	return 0;
}