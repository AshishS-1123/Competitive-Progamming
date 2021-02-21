#include <iostream>
#include <vector>
#include <stack>
//#include <algorithm>

using namespace std;

vector<int> get_nesting_depth(vector<int> brackets)
{
    // stack to keep track of brackets
    stack<int> s;
    
    // variable to store max depth of expression
    int max_depth = 0;
    // variable to store position of max depth
    int position = 0;
    
    // variable to store max symbols in expression
    int max_symbols = 0;
    // variable to store positon of max symbols 
    int symbol_position = 0;
    // variable to store start loc of this expressions
    int start = 0;
    
    for(int i = 0; i < brackets.size(); ++i)
    {
        if(brackets[i] == 1)
        {
            s.push(1);
            
            if( max_depth < s.size() )
            {
                max_depth = s.size();
                position = i+1;
            }
        }
        else
        {
            s.pop();
        }
        
        // if current expression over
        if(s.empty())
        {
            if( i - start > max_symbols )
            {
                max_symbols = i - start;
                symbol_position = start;
            }
            start = i+1;
        }
        
    }
    
    vector<int> ans(4);
    ans[0] = max_depth;
    ans[1] = position;
    ans[2] = max_symbols+1;
    ans[3] = symbol_position+1;
    
    return ans;
}

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> brackets(n);
    for(int i = 0; i < n; ++i)
        cin >> brackets[i];
    
    vector<int> ans(4);
    ans = get_nesting_depth(brackets);
    cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << "\n";
    
	return 0;
}

