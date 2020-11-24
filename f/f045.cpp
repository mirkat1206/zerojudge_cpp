// f045: 3. 身分驗證機制 (Verification)
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while( cin>> s )
	{
		int num[10] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;

		int size = s.length() ;

		for( int i=0 ; i<size ; i++ )
			num[ s[i]-'0' ]++ ;
		
		int a = 0 , cnt = 0 ;
		for( int i=9 ; i>0 , cnt<2 ; i-- )
		{
			while( num[i]>0 )
			{
				a += i*i ;
				cnt++ ;
				num[i]-- ;
				if( cnt==2 )
					break;
			}
		}

		int ans = (s[size-1]-'0')*1 + (s[size-2]-'0')*10 + (s[size-3]-'0')*100 ;

		if( a==ans )
			cout<<"Good Morning!"<< endl;
		else
			cout<<"SPY!"<< endl;
	}
	return 0;
}