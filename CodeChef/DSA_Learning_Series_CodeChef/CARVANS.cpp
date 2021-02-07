#include <iostream>
#include <vector>
//#include <algorithm>

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
        
        vector<int> speed(n);
        for(int i = 0; i < n; ++i)
            cin >> speed[i];
        
        int max_speed = speed[0];
        int cars = 1;
        
        for(int i = 1; i < n; ++i)
        {
            if( speed[i] <= max_speed )
            {
                ++cars;
                max_speed = speed[i];
            }
        }
        
        cout << cars << "\n";
    }
    
	return 0;
}

