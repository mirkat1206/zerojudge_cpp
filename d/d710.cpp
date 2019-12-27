// d710 : parking lot
#include <cstdio>
#include <iostream>
#include <cstring>
#define N 25
using namespace std;

class car{
public:
	car();
	~car();
	void set( string , string );
	string get_brand();
	string get_color();
private:
	string brand;
	string color;
};

car::car(){}

car::~car(){}

void car::set(string s1, string s2)
{
	brand = s1 ;
	color = s2 ;
}

string car::get_brand()
{
	return brand ;
}

string car::get_color()
{
	return color ;
}

int main()
{
	int n, m;
	while( scanf("%d%d", &n, &m )!=EOF )
	{
		class car input[N];

		string bnd, clr;
		for( int i=0 ; i<n ; i++ )
		{
			cin>> bnd >> clr ;
			input[i].set( bnd, clr );
		}

		string bndORclr, ques;
		while( m-- )
		{
			cin>> bndORclr >> ques ;
			if( bndORclr=="brand" )
				for( int i=0 ; i<n ; i++ )
				{
					if( input[i].get_brand()==ques )
						cout<< input[i].get_brand() <<" "<< input[i].get_color() << endl;
				}
			else
				for( int i=0 ; i<n ; i++ )
				{
					if( input[i].get_color()==ques )
						cout<< input[i].get_brand() <<" "<< input[i].get_color() << endl;
				}
		}
	}
	return 0;
}