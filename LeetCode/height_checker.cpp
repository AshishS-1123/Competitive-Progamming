class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        // create copy of heights vector
        vector<int> height_copy = heights;
        
        // variable to store number of students
        int n = heights.size();
        
        // variable to hold number of swappings required
        int swaps = 0;
        
        // sort the heights
        sort( heights.begin(), heights.end() );
        
        
        // for every elemnt in both arrays
        for( int i = 0; i < n; ++i )
        {
            // compare and decide if the elemtns need to be swapped
            if( heights[i] != height_copy[i] )
                ++swaps;
        }
        
        return swaps;
    }
};
