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
        
        int s,p,v;
        int prof = 0;
        
        for(int i = 0; i < n; ++i)
        {
            cin >> s >> p >> v;
            ++s;
            
            int curr_prof = (p/s) * v;
            
            if( curr_prof > prof )
                prof = curr_prof;
        }
        
        cout << prof << "\n";
    }
    
	return 0;
}

