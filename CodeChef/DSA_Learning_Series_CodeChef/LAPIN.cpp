#include <iostream>

using namespace std;

int main( void )
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	string s;
	
	while(t--)
	{
		cin >> s;
		int size = s.size();
		int mid;
		if( size % 2 )
			mid = size / 2;
		else
			mid = (size + 1) / 2;
		
		int freq1[26], freq2[26];
		
		for( int i = 0; i < 26; ++i )
		{
			freq1[i] = 0;
			freq2[i] = 0;
		}
		
		if( size%2 == 0 )
			for( int i = 0; i < size; ++i )
			{
				if( i < mid)
					++freq1[ (int)s[i] - 97 ];
				else 
					++freq2[ (int)s[i] - 97 ];
			}
		else
			for( int i = 0; i < size; ++i )
			{
				if( i < mid)
					++freq1[ (int)s[i] - 97 ];
				else if( i > mid )
					++freq2[ (int)s[i] - 97 ];
			}
		
		int flag = 0;
		for( int i = 0; i < 26; ++i )
		{
			if( freq1[i] != freq2[i] )
			{
				flag = 1;
			}
		}
		
		if( flag == 0 )
			cout << "YES\n";
		else
			cout << "NO\n";
		
		
	}
	
	return 0;
}

