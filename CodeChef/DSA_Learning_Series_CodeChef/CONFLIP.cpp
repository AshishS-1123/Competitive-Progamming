#include <iostream>

using namespace std;

int main( void )
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while( t-- )
	{
		unsigned int g, i, q;
		long long int n;
		cin >> g;
		while( g-- )
		{
			cin >> i >> n >> q;
			
			if( n%2 == 0 )
				cout << n/2 << "\n";
			else
			{
				if( i == q )
					cout << (n-1) / 2 << "\n";
				else
					cout << (n+1) / 2 << "\n";
			}
		}
	}
	
	return 0;
}

