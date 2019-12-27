// a135 : 12250 - Language Detection
#include <iostream>
#include <string>
using namespace std;

string langg[6] = {	"ENGLISH",	"SPANISH",	"GERMAN",	
					"FRENCH",	"ITALIAN",	"RUSSIAN" 		} ;
string sayhi[6] = {	"HELLO",	"HOLA",		"HALLO",	
					"BONJOUR",	"CIAO",		"ZDRAVSTVUJTE" } ;

int main()
{
	int cnt = 0 ;
	string input;
	while( cin>> input && input!="#" )
	{
		cout<<"Case "<< ++cnt <<": ";

		bool flag = 0 ;
		for( int i=0 ; i<6 ; i++ )
			if( input==sayhi[i] )
			{
				cout<< langg[i] << endl;
				flag = 1 ;
			}
		if( !flag )
			cout<<"UNKNOWN"<< endl;
	}
	return 0;
}