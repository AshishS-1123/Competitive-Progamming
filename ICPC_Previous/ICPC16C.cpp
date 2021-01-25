#include <iostream>

using namespace std;

int sum_digits(int num )
{
    int sum = 0;
    
    while( num )
    {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int main(void) {
	int t;
	cin >> t;
	
	while( t-- )
	{
	    int d;
	    cin >> d;
	    
	    while( d > 9 )
	    {
	        d = sum_digits(d);
	    }
	    
	    cout << sum_digits(d+1) << "\n";
	}
	
	return 0;
}


