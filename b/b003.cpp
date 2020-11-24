// b003: 運算式 + - 符號設定問題
#include <iostream>
using namespace std;

int main()
{
	int k;
	while( cin>> k )
	{
		if( k<0 )	k *= -1 ;

		int sum = 0, i = 0 ;
		while( sum<k )
			sum += ++i ;

		if( sum==k )
			cout<< i << endl;
		else
		{
			while( (sum-k)%2==1 )
				sum += ++i ;
			cout<< i << endl;
		}
	}
	return 0;
}