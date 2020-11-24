// f147: 1. 點餐系統 (Ordering System)
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

const string name[2][5] = { {"Medium Wac","WChicken Nugget","Geez Burger","ButtMilk Crispy Chicken","Plastic Toy"} ,
							{"German Fries","Durian Slices","WcFurry","Chocolate Sunday"} } ;
const int prices[2][5] = { { 4 , 8 , 7 , 6 , 3 } , { 2 , 3 , 5 , 7 } } ;

int main()
{
	int command, num, price = 0 ;;
	while( scanf("%d", &command )!=EOF )
	{
		if( command==0 )
		{
			printf("Total: %d\n", price );
			break;
		}
		else
		{
			scanf("%d", &num );
			cout<< name[command-1][num-1] <<" "<< prices[command-1][num-1] << endl;
			price += prices[command-1][num-1] ;
		}
	}
	return 0;
}