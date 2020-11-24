// e997: 升旗典禮抽背課文
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	string s;
	stringstream ss;
	vector<string> v;
	int n;

	getline( cin , s );
	ss<< s ;
	while( ss>> s )
		v.push_back( s );
	
	cin>> n ;
	cout<< v[ v.size()-n ] << endl;

	return 0;
}