// e984: 連假時在做什麼？有沒有空？可以來打code嗎？
#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;

// const int MAX_CNT = 1000000 + 10 ;
const string table[10] = {"01","012","123","234","345","456","567","678","789","89"} ;
const string init[10] = {"0","1","2","3","4","5","6","7","8","9"} ;

vector<string> ans;

int main()
{
	int MAX_CNT;
	cin>> MAX_CNT ;
	// initialize 1-word answers
	for( int i=0 ; i<10 ; i++ )
		ans.push_back( init[i] );
	// build n answers
	int cnt = 0, now = 1 ;
	while( cnt<MAX_CNT )
	{
		char last = ans[now][ ans[now].size()-1 ];
		string temp = table[last-'0'] ;
		for( int i=0 ; i<temp.size() ; i++ )
		{
			string new_string = ans[now] + temp[i] ;
			ans.push_back( new_string );
			cnt++ ;
		}
		now++ ;
	}
	cout<< ans[MAX_CNT] << endl;

	return 0;
}