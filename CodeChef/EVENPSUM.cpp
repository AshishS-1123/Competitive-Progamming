#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while( t-- )
	{
	    long long int a,b;
	    cin >> a >> b;
	     
	    long long int result = 0;
	     
	    // if a and b odd
	    if( a%2 != 0 && b%2 != 0 )
	        result = (a+1)*(b+1)/4 + (a-1)*(b-1)/4;
	        
	    // if a odd, b even
	    else if( a%2 != 0 && b%2 == 0 )
	        result = (a+1)*(b)/4 + (a-1)*(b)/4;
	        
	    // if a even, b odd
	    else if( a%2 == 0 && b%2 != 0 )
	        result = (a)*(b+1)/4 + (a)*(b-1)/4;
	        
	    // if a and b even
	    else if( a%2 == 0 && b%2 == 0 )
	        result = (a)*(b)/4 + (a)*(b)/4;
	    
	    cout << result << "\n";
	}
	
	return 0;
}

