// b969: hello, everyone
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string s, hello;
	stringstream names;
	while( getline( cin , s ) )
	{
		getline( cin , hello );
		names<< s ;
		while( names>> s )
			cout<< hello <<", "<< s << endl;
	}
	return 0;
}