// c665 : 進制轉換
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int char2num( char c )
{
 	if( c=='0' )	return 0 ;
	else if( c=='1' )	return 1 ;
	else if( c=='2' )	return 2 ;
	else if( c=='3' )	return 3 ;
	else if( c=='4' )	return 4 ;
	else if( c=='5' )	return 5 ;
	else if( c=='6' )	return 6 ;
	else if( c=='7' )	return 7 ;
	else if( c=='8' )	return 8 ;
	else if( c=='9' )	return 9 ;
	else if( c=='A' )	return 10 ;
	else if( c=='B' )	return 11 ;
	else if( c=='C' )	return 12 ;
	else if( c=='D' )	return 13 ;
	else if( c=='E' )	return 14 ;
	else if( c=='F' )	return 15 ;
	else if( c=='G' )	return 16 ;
	else if( c=='H' )	return 17 ;
	else if( c=='I' )	return 18 ;
	else if( c=='J' )	return 19 ;
	else if( c=='K' )	return 20 ;
	else if( c=='L' )	return 21 ;
	else if( c=='M' )	return 22 ;
	else if( c=='N' )	return 23 ;
	else if( c=='O' )	return 24 ;
	else if( c=='P' )	return 25 ;
	else if( c=='Q' )	return 26 ;
	else if( c=='R' )	return 27 ;
	else if( c=='S' )	return 28 ;
	else if( c=='T' )	return 29 ;
	else if( c=='U' )	return 30 ;
	else if( c=='V' )	return 31 ;
	else if( c=='W' )	return 32 ;
	else if( c=='X' )	return 33 ;
	else if( c=='Y' )	return 34 ;
	else if( c=='Z' )	return 35 ;
}

char num2char( int n )
{
 	if(      n==0  )	return '0' ;
	else if( n==1  )	return '1' ;
	else if( n==2  )	return '2' ;
	else if( n==3  )	return '3' ;
	else if( n==4  )	return '4' ;
	else if( n==5  )	return '5' ;
	else if( n==6  )	return '6' ;
	else if( n==7  )	return '7' ;
	else if( n==8  )	return '8' ;
	else if( n==9  )	return '9' ;
	else if( n==10 )	return 'A' ;
	else if( n==11 )	return 'B' ;
	else if( n==12 )	return 'C' ;
	else if( n==13 )	return 'D' ;
	else if( n==14 )	return 'E' ;
	else if( n==15 )	return 'F' ;
	else if( n==16 )	return 'G' ;
	else if( n==17 )	return 'H' ;
	else if( n==18 )	return 'I' ;
	else if( n==19 )	return 'J' ;
	else if( n==20 )	return 'K' ;
	else if( n==21 )	return 'L' ;
	else if( n==22 )	return 'M' ;
	else if( n==23 )	return 'N' ;
	else if( n==24 )	return 'O' ;
	else if( n==25 )	return 'P' ;
	else if( n==26 )	return 'Q' ;
	else if( n==27 )	return 'R' ;
	else if( n==28 )	return 'S' ;
	else if( n==29 )	return 'T' ;
	else if( n==30 )	return 'U' ;
	else if( n==31 )	return 'V' ;
	else if( n==32 )	return 'W' ;
	else if( n==33 )	return 'X' ;
	else if( n==34 )	return 'Y' ;
	else if( n==35 )	return 'Z' ;
}

int main()
{
	string s;
	int b1, b2;
	while( cin>> s >> b1 >> b2 )
	{
		int i_10 = 0, now, bb = 1 ;
		for( int i=s.length()-1 ; i>=0 ; i-- )
		{
			now = char2num( s[i] ) ;
			i_10 += now * bb ;
			bb *= b1 ;
		}
		string ans;
		char c;
		while( i_10>0 )
		{
			c = num2char( i_10%b2 ) ;
			ans = c + ans ;
			i_10 /= b2 ;
		}
		cout<< ans << endl;
	}
	return 0;
}