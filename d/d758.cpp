// b758 : 牛仔(ㄗˇ)很忙
#include <cstdio>

int main()
{
	int h, m;
	while( scanf("%d%d", &h , &m )!=EOF )
	{
		m += 30 ;
		h += ( 2 + m/60 ) ;
		m %= 60 ;
		h %= 24 ;
		printf("%02d:%02d\n", h , m );
	}
	return 0;
}