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
        int amin, bmin, cmin, a,b,c, tmin;
        cin >> amin >> bmin >> cmin >> tmin >> a >> b >> c;
        
        if(a >= amin && b >= bmin && c >= cmin)
        {
            if( a+b+c >= tmin )
                cout << "yes\n";
            else
                cout << "no\n";
        }
        else
            cout << "no\n";
    }
    
	return 0;
}

