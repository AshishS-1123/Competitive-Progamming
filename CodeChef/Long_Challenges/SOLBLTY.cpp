#include <iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while( t-- )
    {
        int x,a,b;
        cin >> x >> a >> b;
        
        int val = a + b * (100-x);
        cout << val * 10 << "\n";
    }
    
	return 0;
}

