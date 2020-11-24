// e051: 文意字彙
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int main()
{
	string s;
	while( cin>> s )
	{
		int length = s.length() ;
		cout<< s[0] ;
		for( int i=1 ; i<length-1 ; i++ )
			cout<<"_";
		cout<< s[length-1] << endl;
	}
	return 0;
}