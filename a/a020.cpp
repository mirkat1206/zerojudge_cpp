// a020 : 身分證檢驗
#include <cstdio>

/*
A=10(1), B=11(10), C=12(19), D=13(28), E=14(37), F=15(46), G=16(55), 
H=17(64), I=34(39), J=18(73), K=19(82), L=20(2), M=21(11), N=22(20), 
O=35(48), P=23(29), Q=24(38), R=25(47), S=26(56), T=27(65), U=28(74), 
V=29(83), W=32(21), X=30(3), Y=31(12), Z=33(30)
*/
int en[26] = { 	1 , 0 , 9 , 8 , 7 , 6 , 5 , 4 , 9 , 3 , 2 , 2 , 1 , 
				0 , 8 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 1 , 3 , 2 , 0 };

int main()
{
	char input[10] ;
	while( scanf("%s", input )!=EOF )
	{
		int sum = 0 ;

		sum += en[ input[0]-'A' ] ;
		
		for( int i=1 ; i<9 ; i++ )
			sum += ( input[i] - '0' )*( 9 - i ) ;
		sum += ( input[9] - '0' ) ;

		if( sum%10==0 )
			printf("real\n");
		else
			printf("fake\n");
	}
	return 0;
}