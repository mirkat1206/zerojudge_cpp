// d485 : 我愛偶數
#include <cstdio>

int main()
{
	long long int a, b;
	while( scanf("%lld%lld", &a , &b )!=EOF )
	{
		// 奇-奇, 偶-偶 = ( b - a )/2 + (b%2==0)
		// 奇-偶, 偶-奇 = ( b - a -+ 1 )/2 + (b%2==0)
		printf("%lld\n", ( b - a - ( a%2==1 && b%2==0 ) + ( a%2==0 && b%2==1 ) )/2 + (b%2==0) );
	}
	return 0;
}