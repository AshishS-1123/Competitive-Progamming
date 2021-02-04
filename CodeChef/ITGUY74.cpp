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
        int k;
        cin >> k;
        
        int star = k;
        for(int i = 0; i < k; ++i)
        {
            for(int j = 1; j < k+1; ++j)
            {
                if( j == star )
                    cout << "*";
                else
                    cout << j;
            }
            cout << "\n";
            --star;
        }
    }
    
	return 0;
}

