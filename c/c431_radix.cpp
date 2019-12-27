// c431 : Sort ! Sort ! Sort !
#include <cstdio>
#define N 10000

struct num{
	int n;
	struct num *next = NULL;
};

struct num input[N];

int main()
{
	int n;
	while( scanf("%d", &n)!=EOF )
	{
		for( int i=0 ; i<n ; i++ )
			scanf("%d", &input[i].n );
		printf("yee~\n");

		int have_showed[10] ;
		struct num *str[10] , *end[10];
		for( int i=0 ; i<10 ; i++ )
		{
			str[i] = NULL ;
			end[i] = NULL ;
			have_showed[i] = 0 ;
		}
		
		// %10
		for( int i=0 ; i<n ; i++ )
		{
			int lsd = input[i].n % 10 ;
			if( !have_showed[ lsd ] )
			{
				str[ lsd ] = &input[i] ;
				end[ lsd ] = &input[i] ;
				have_showed[ lsd ] = 1 ;
			}
			else
			{
				end[ lsd ]->next = &input[i] ;
				end[ lsd ] = &input[i] ;
			}
		}

		struct num *head = NULL, *tail = NULL ;
		int Itail;
		for( int i=0 ; i<10 ; i++ )
		{
			if( str[i]!=NULL )
			{
				if( head==NULL )
				{
					head = str[i] ;
					Itail = i ;
				}
				else
				{
					end[ Itail ]->next = str[i] ;
					Itail = i ;
				}
			}
		}
		printf("%%10 yee~\n");

	
		for( int i=0 ; i<10 ; i++ )
		{
			str[i] = NULL ;
			end[i] = NULL ;
			have_showed[i] = 0 ;
		}
		// (/10)%10
		struct num *now = head ;

		int cnt = 1 ;
		now = head ;
		while( now!=NULL && cnt<=n )
		{
			printf("%d ", now->n );
			now = now->next ;
			cnt++ ;
		}
		printf("\n");


		while( now!=NULL )
		{
			int lsd = (now->n/10) % 10 ;
			if( !have_showed[ lsd ] )
			{
				str[ lsd ] = now ;
				end[ lsd ] = now ;
				have_showed[ lsd ] = 1 ;
			}
			else
			{
				end[ lsd ]->next = now ;
				end[ lsd ] = now ;
			}
			now = now->next ;
		}

		head = NULL ;
		for( int i=0 ; i<10 ; i++ )
		{
			if( str[i]!=NULL )
			{
				if( head==NULL )
				{
					head = str[i] ;
					tail = str[i] ;
					Itail = i ;
				}
				else
				{
					end[ Itail ]->next = str[i] ;
					tail = str[i] ;
					Itail = i ;
				}
			}
		}
		printf("/10%%10 yee~\n");


		struct num *buf;
		while( head->n==100 )
		{
			buf = head ;
			head = head->next ;
			tail->next = buf ;
			tail = buf ;
		}


		// int cnt = 1 ;
		cnt = 1 ;
		now = head ;
		while( now!=NULL && cnt<=n )
		{
			printf("%d ", now->n );
			now = now->next ;
			cnt++ ;
		}
		printf("\n");
	}
	return 0;
}