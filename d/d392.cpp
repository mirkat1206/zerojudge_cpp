// d392 : 读取练习——强大的加法！
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
		long long int ans = 0, x ;
		while( ss>> x )
			ans += x ;
		cout<< ans << endl;
	}
	return 0;
}