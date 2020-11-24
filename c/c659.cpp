// c659 : 連接詞
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
	string s;
	stringstream ss;
	while( getline( cin , s ) )
	{
		ss.clear();
		ss<< s ;
		string conjunction;
		ss>> conjunction >> s ;
		cout<< s ;
		while( ss>> s )
		{
			cout<<" "<< conjunction <<" "<< s ;
		}
		cout<< endl;
	}
	return 0;
}