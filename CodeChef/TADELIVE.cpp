#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while( t-- )
    {
        int n, x, y;
        cin >> n >> x >> y;

        int tips_a[n];
        int tips_b[n];

        for( int i = 0; i < n; ++i )
            cin >> tips_a[i];
        for( int i = 0; i < n; ++i )
            cin >> tips_b[i];

        int diff[n];

        for( int i = 0; i < n; ++i )
            diff[i] = tips_a[i] - tips_b[i];

        sort( diff, diff+n );

        int b = 0;
        int a = n-1;
        int total_tips = 0;

        while( b < y && (n-1-a) < x )
        {
            if( abs(diff[b]) > abs())
        }

    }

    return 0;
}
