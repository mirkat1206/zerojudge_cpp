// a271: 彩色蘿蔔
#include <cstdio>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <sstream>
using std::stringstream;

int main()
{
	int x, y, z, w, n, m;
	int kase;
	scanf("%d", &kase );
	while( kase-- )
	{
		cin>> x >> y >> z >> w >> n >> m ;
		bool is_dead = 0 ;
		int is_poison = 0 ;

		string s;
		stringstream ss;
		getline( cin , s );
		getline( cin , s );
		ss.clear();
		ss<< s ;

		int num;
		while( ss>> num )
		{
			m -= is_poison*n ;
			if( m<=0 )
				is_dead = 1 ;
			
			if( num==1 )
				m += x ;
			else if( num==2 )
				m += y ;
			else if( num==3 )
				m -= z ;
			else if( num==4 )
			{
				m -= w ;
				is_poison++ ;
			}

			if( m<=0 )
				is_dead = 1 ;
		}
		if( is_dead )
			cout<<"bye~Rabbit"<< endl;
		else
			cout<< m <<"g"<< endl;
	}
	return 0;
}