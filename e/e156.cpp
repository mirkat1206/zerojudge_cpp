// e156 : 良心題: 求和
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int foo(int &a, int x)
{
	// cout<<"a = "<< a << endl;
	a += x ;
	x && foo( a , x-1 );
	return x ;
}

int main()
{
	int n, ans;
	while( cin>> n )
	{
		ans = 0 ;
		foo( ans , n );
		cout<< ans << endl;
	}

	return 0;
}