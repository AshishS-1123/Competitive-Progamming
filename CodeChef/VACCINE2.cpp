#include <iostream>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while( t-- )
	{
	    long int n,d;
	    cin >> n >> d;
	    
	    int a;
	    
	    long int at_risk = 0;
	    long int no_risk = 0;
	    
	    for( long int i = 0; i < n; ++i )
	       {
	           cin >> a;
	           
	           if( a <= 9 || a >= 80 )
	              ++at_risk;
	           else
	              ++no_risk;
	       }
	       
	       long int number_of_days = at_risk / d + no_risk / d;
	       
	       if( at_risk % d != 0 )
	           ++number_of_days;
	       if( no_risk % d != 0 )
	           ++number_of_days;
	       
	       cout << number_of_days << "\n";
	}
	
	
	return 0;
}

