#include <iostream>

using namespace std;

int main( void )
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	unsigned long long int t;
	cin >> t;
	
	unsigned long long int n;
	while( t-- )
	{
		cin >> n;
		int zeros = 0;
		// divide by powers of 5
		// only 5 csn creare zeros
		for (int i = 5; n / i >= 1; i *= 5) 
      		zeros += n / i; 
		cout << zeros << "\n";
	}
	
	return 0;
}

