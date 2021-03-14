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
        int p;
        cin >> p;
        
        int menus = 0;
        
        if(p > 2048)
        {
            menus = p / 2048;
            p %= 2048;
        }
        
        for(int i = 0; i < 12; ++i)
        {
            if((p & (1 << i)) == (1 << i))
            {
                ++menus;
            }
        }
        
        cout << menus << "\n";
    }
    
	return 0;
}

