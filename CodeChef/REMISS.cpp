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
        long long int a,b;
        cin >> a >> b;
        
        cout << max(a,b) << " " << a + b << "\n";
    }
    
	return 0;
}

