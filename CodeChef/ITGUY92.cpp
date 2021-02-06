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
        
        for(int i = 0; i < k; ++i)
        {
            char alph = 'A';
            
            for(int j = 0; j < i; ++j)
            {
                cout << "_";
                ++alph;
            }
            for(int j = i; j < k; ++j)
            {
                cout << alph;
                ++alph;
            }
            cout << "\n";
        }
    }
    
	return 0;
}

