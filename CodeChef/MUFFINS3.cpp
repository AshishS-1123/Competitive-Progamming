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
        long long int n;
        cin >> n;
        
        if(n % 2 == 0)
            cout << (n / 2) + 1 << "\n";
        else
            cout << (n + 1) / 2 << "\n";
    }
    
	return 0;
}

