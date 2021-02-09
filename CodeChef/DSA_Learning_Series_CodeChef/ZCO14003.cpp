#include <iostream>
#include <algorithm>

#define max( a,b ) (a > b) ? a : b
using namespace std;

int main( void )
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	unsigned long long int n;
	cin >> n;
	
	unsigned long long int arr[n];
	for( unsigned long long int i = 0; i < n; ++i)
		cin >> arr[i];
	
	sort(arr, arr+n);
	unsigned long long int max_rev;
	
	for(int i = 0;i < n;++i)
	{
		if(i == 0)
			max_rev = (unsigned long long int)(arr[0] * n);
		else
			max_rev = (unsigned long long int)max( max_rev, (unsigned long long int)(arr[i] * (n-i)) );
	}
	
	cout << max_rev;
	
	return 0;
}

