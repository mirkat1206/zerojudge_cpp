// f035: 最佳隊名獎
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline( cin , s );

	int size = s.size() ;
	cout<< (int)s[0] ;
	for( int i=1 ; i<size ; i++ )
		cout<<"_"<< (int)s[i] ;
	cout<< endl;

	return 0;
}