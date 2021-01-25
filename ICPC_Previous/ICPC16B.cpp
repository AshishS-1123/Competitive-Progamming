#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	
	while( t-- )
	{
	    int n;
	    cin >> n;
	    
	    long long int one = 0, zero = 0, minus = 0, others = 0;
	    long long int a;
	    
	    for( int i = 0; i < n; ++i )
	    {
	        cin >> a;
	        
	        if( a == 0 )
	            ++zero;
	        else if( a == 1 )
	            ++one;
	        else if( a == -1 )
	            ++minus;
	        else
	            ++others;
	    }
	    
	    if( others > 1 )
	        cout << "no\n";
	    else if( others != 0 && minus != 0 )
	        cout << "no\n";
	    else if( minus > 1 && one == 0 )
	        cout << "no\n";
	    else
	        cout << "yes\n";
	        
	}
	 
	return 0;
}

