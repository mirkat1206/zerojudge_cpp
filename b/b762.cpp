// b762: 英國聯蒙
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

const string line[] = {"Get_Kill","Die","Get_Assist"};

int main()
{
	int k = 0, d = 0, a = 0 ;
	int kkk = 0 ;
	string s;

	int n;
	cin>> n ;
	while( n-- )
	{
		cin>> s ;
		if( s==line[0] )
		{
			k++ ;
			kkk++ ;

			if( kkk<3 )
				cout<<"You have slain an enemie."<< endl;
			else if( kkk==3 )
				cout<<"KILLING SPREE!"<< endl;
			else if( kkk==4 )
				cout<<"RAMPAGE~"<< endl;
			else if( kkk==5 )
				cout<<"UNSTOPPABLE!"<< endl;
			else if( kkk==6 )
				cout<<"DOMINATING!"<< endl;
			else if( kkk==7 )
				cout<<"GUALIKE!"<< endl;
			else 
				cout<<"LEGENDARY!"<< endl;
		}
		else if( s==line[1] )
		{
			d++ ;
			if( kkk<3 )
				cout<<"You have been slained."<< endl;
			else
				cout<<"SHUTDOWN."<< endl;
			kkk = 0 ;
		}
		else
			a++ ;
	}
	cout<< k <<"/"<< d <<"/"<< a << endl;
	return 0;
}