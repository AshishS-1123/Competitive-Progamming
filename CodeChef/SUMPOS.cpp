#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while( t-- )
    {
        int x,y,z;
        cin >> x >> y >> z;
        
        if( x + y == z )
            cout << "yes\n";
        else if( x + z == y )
            cout << "yes\n";
        else if( y + z == x )
            cout << "yes\n";
        else
            cout << "no\n";
    }
    
	return 0;
}

