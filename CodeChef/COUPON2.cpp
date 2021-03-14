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
        int d,c;
        int a[3], b[3];
        
        cin >> d >> c;
        cin >> a[0] >> a[1] >> a[2];
        cin >> b[0] >> b[1] >> b[2];
        
        // calculate total without coupon
        int total_before = a[0] + a[1] + a[2] + b[0] + b[1] + b[2] + 2*d;
        // calculate total with coupon
        int total_after = total_before + c;
        
        // if total price on day 1 matches, remove delivery charge
        if(a[0] + a[1] + a[2] >= 150)
            total_after -= d;
        // if total price on day 2 matches, remove delivery charge
        if(b[0] + b[1] + b[2] >= 150)
            total_after -= d;
        
        if(total_before > total_after)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
	return 0;
}

