#include <iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    
    while( t-- )
    {
        long long int n,x,k;
        cin >> n >> x >> k;
        
        if(x % k == 0)
            cout << "yes\n";
        else if((n+1-x)%k == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    
	return 0;
}

