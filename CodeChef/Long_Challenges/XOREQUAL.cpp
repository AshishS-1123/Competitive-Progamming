#include <iostream>
//#include <vector>
//#include <algorithm>

#define ull unsigned long long int 
#define li long int 
#define mod 1000000007
using namespace std;

ull power(ull a, li n)
{
    ull res = 1;
    
    while(n)
    {
        if(n%2 != 0)
        {
            res = (res*a) % mod;
            --n;
        }
        else
        {
            a = (a*a) % mod;
            n /= 2;
        }
    }

    return res;
}

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    
    while( t-- )
    {
        long int n;
        cin >> n;
        
        cout << power(2, n-1) << "\n";
    }
    
	return 0;
}

