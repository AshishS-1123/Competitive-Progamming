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
        
        // repeat for all lines
        for(int i = 1; i < k+1; ++i)
        {
            // print the number
            for(int j = 1; j < i+1; ++j)
            {
                cout << k-i+1;
            }
            // print the char 
            for(int j = i; j < k; ++j)
            {
                char alph = 65 + i - 1;
                cout << alph;
            }
            // next line
            cout << "\n";
        }
    }
    
	return 0;
}

