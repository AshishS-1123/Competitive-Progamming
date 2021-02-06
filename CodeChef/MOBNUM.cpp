#include <iostream>
#include <cctype>
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
        string s;
        cin >> s;
        
        bool result = true; // true implies valid nummber
        
        if( s[0] == '0' )
            result = false;
        if( s.size() != 10 )
            result = false;
        
        for(int i = 0; i < s.size(); ++i)
        {
            if( !isdigit(s[i]) )
                result = false;
        }
        
        if( result == true )
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
	return 0;
}

