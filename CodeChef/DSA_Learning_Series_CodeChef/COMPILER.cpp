#include <iostream>
#include <stack>

using namespace std;

int find_max(string s)
{
    stack<int> sk;
    int i = 0;
    int len = 0;
    
    for(i = 0; i < s.size(); ++i)
    {
        if( s[i] == '<' )
        {
            sk.push(1);
        }
        else
        {
            if( sk.size() == 0 )
                break;
            
            sk.pop();
            
            if( sk.size() == 0 )
                len = i+1;
        }
    }
    
    return len;
    
}

int main()
{
    int t;
    cin >> t;
    
    string s;
    
    while(t--)
    {
        cin >> s;
        
        cout << find_max(s) << "\n";
    }
    
    return 0;
}
