// e700: 星座
#include <iostream>
#include <string>
using namespace std;

const string constellation[12] = {	"水瓶座","雙魚座","牡羊座","金牛座","雙子座","巨蟹座",
									"獅子座","處女座","天秤座","天蠍座","射手座","摩羯座"} ;

int main()
{
	int m, d;
	char c;
	while( cin>> m >> c >> d )
	{
		int temp = 100*m + d ;

		int ans;
		if( temp<121 )			// 摩羯座
			ans = 11 ;
		else if( temp<220 )		// 水瓶座
			ans = 0 ;
		else if( temp<321 )		// 雙魚座
			ans = 1 ;
		else if( temp<421 )		// 牡羊座
			ans = 2 ;
		else if( temp<522 )		// 金牛座
			ans = 3 ;
		else if( temp<622 )		// 雙子座
			ans = 4 ;
		else if( temp<723 )		// 巨蟹座
			ans = 5 ;
		else if( temp<822 )		// 獅子座
			ans = 6 ;
		else if( temp<924 )		// 處女座
			ans = 7 ;
		else if( temp<1024 )	// 天秤座
			ans = 8 ;
		else if( temp<1123 )	// 天蠍座
			ans = 9 ;
		else if( temp<1223 )	// 射手座
			ans = 10 ;
		else 					// 摩羯座
			ans = 11 ;	

		cout<< constellation[ans] << endl ;		
	}
	return 0;
}