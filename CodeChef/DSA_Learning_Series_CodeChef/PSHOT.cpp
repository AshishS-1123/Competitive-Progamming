#include <iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

int score_found(string score, int n)
{
    int score_a = 0;
    int score_b = 0;
    int mid = (n % 2) ? (n+1) / 2 : n / 2;
    
    for(int i = 0; i < 2 * n; ++i)
    {
        if( i % 2 == 0 && score[i] == '1' )
            ++score_a;
        if( i % 2 == 1 && score[i] == '1' )
            ++score_b;
        
        if( score_a - score_b > n - (i+1) / 2 )
            return i+1;
        if( score_b - score_a > n - i/2 - 1 )
            return i+1;
    }
    
    return 2*n;
}

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    int n;
    string score;
    
    while( t-- )
    {
        cin >> n >> score;
        
        cout << score_found(score, n) << "\n";
    }
    
	return 0;
}

