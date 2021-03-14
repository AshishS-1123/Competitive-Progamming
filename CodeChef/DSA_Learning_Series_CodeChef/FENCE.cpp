#include <iostream>
#include <set>
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
        long long int n,m;
        int k;
        cin >> n >> m >> k;
        
        // create set to hold plant loations
        set<pair<long long int,long long int>> plants;
        
        // variables to take input
        long long int r,c;
        
        for(int i = 0; i < k; ++i)
        {
            // scan all elements
            cin >> r >> c;
            
            // add this location to the plant set 
            plants.insert(make_pair(r,c));
        }
        
        // store number of fnces needed
        long long int wall_count = 0;
        
        // repeat for all plants in grid
        for(auto cell : plants )
        {
            // check if top cell exists
            if(plants.count({cell.first-1, cell.second}) == 0)
            {
                ++wall_count;
            }
             
            // check if bottom cell exists
            if(plants.count({cell.first+1, cell.second}) == 0)
            {
                ++wall_count;
            }
             
            // check if left cell exists
            if(plants.count({cell.first, cell.second-1}) == 0)
            {
                ++wall_count;
            }
             
            // check if right cell exists
            if(plants.count({cell.first, cell.second+1}) == 0)
            {
                ++wall_count;
            }
        
        }
        
        cout << wall_count << "\n";
    }
    
	return 0;
}

