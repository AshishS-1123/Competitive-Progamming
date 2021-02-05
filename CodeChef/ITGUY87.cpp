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
            for(int j = 0; j < i+1; ++j)
            {
                if( j % 2 == 0 )
                    cout << "*";
                else
                    cout << "#";
            }
            cout << "\n";
        }
    }
    
	return 0;
}

