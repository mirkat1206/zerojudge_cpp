// e995: string again!!
#include <cstdio>

int main()
{
	long long int n;
	while( scanf("%lld" ,&n )!=EOF ) 
	{
		long long int temp = n ;
		int bits = 1 ;
		long long int tot_n_bits = 9, floor = 0, ceil = 9 ;
		while( temp>0 )
		{
			temp -= tot_n_bits*bits ;
			bits++ ;
			tot_n_bits = tot_n_bits*10 ;

			floor = floor*10 + 9 ;
			ceil = ceil*10 + 9 ;
		}
		tot_n_bits /= 10 ;
		bits-- ;
		temp += tot_n_bits*bits ;
		// printf("temp = %d\n", temp );

		floor = ( floor - 9 )/10 ;
		ceil = ( ceil - 9 )/10 ;
		// printf("tot_n_bits = %lld , bits = %d\nfloor = %lld, ceil = %lld\n", tot_n_bits , bits , floor , ceil );

		int i_floor, i_bits;
		if( bits==0 )
			printf("error : %lld\n", n );
		i_floor = ( temp-1 )/bits + 1 ;
		i_bits  = temp - (i_floor-1)*bits - 1 ;
		// printf("i_floor = %d, i_bits = %d\n", i_floor , i_bits );

		long long int number = floor + i_floor ;
		char s[20];
		sprintf( s ,"%lld", number );
		// printf("s = %s, ans = %c\n", s , s[ i_bits] );

		printf("%c\n", s[ i_bits ] );
	}
	return 0;
}