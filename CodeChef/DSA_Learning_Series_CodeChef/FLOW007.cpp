#include <iostream>

using namespace std;

int main( void )
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	long long int n, rev_n;
	
	while(t--)
	{
		cin >> n;
		rev_n = 0;
		
		while(n != 0)
		{
			rev_n = (long long int)(rev_n * 10 + n % 10);
			n = (long long int)(( n - n%10 ) / 10);
		}
		cout << rev_n << "\n";
	}
	
	
	return 0;
}

