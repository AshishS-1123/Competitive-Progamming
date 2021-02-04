#include <iostream>

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
        
        for(int i = 1; i < k+1; ++i)
        {
            for(int j = 1; j < i+1; ++j)
            {
                cout << j;
                if( j == i )
                    cout << "\n";
                else
                    cout << "*";
            }
        }
    }
    
	return 0;
}

