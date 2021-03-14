#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<long long int,int> &a, const pair<long long int,int> &b)
{
    return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    
    vector<pair<long long int, int>> a(n), b(m);
    
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    
    for(int i = 0; i < m; ++i)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    
    sort(a.begin(), a.end(), compare);
    sort(b.begin(), b.end(), compare);
    
    for(int count = 0; count < n; ++count)
        cout << a[count].second << " " << b[m-1].second << "\n";
    for(int count; count < m-1; ++count)
        cout << a[0].second << " " << b[count].second << "\n";
    
    
	return 0;
}

