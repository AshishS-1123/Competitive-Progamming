#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    int n;
    
    while( t-- )
    {
        cin >> n;
        long long int temp;
        vector<long long int> mins(n);
        
        cin >> temp;
        mins[0] = temp;
        
        for(int i = 1; i < n; ++i)
        {
            cin >> temp;
            
            mins[i] = min(mins[i-1], temp);
        }
        
        long long int tokens = 0;
        for(auto c : mins)
            tokens += c;
        
        cout << tokens << "\n";
    }
    
	return 0;
}

