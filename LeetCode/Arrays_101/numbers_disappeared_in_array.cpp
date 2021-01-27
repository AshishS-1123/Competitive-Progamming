class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // sort the vector in increasing order
        sort( nums.begin(), nums.end() );
        
        // variable to hold index of element being processed
        int index = 0;
        // variable to hold number to look for next
        int elem_found = 1;
        // vector to store the result
        vector<int> not_found;
        
        // repeat for all elements
        while( index < nums.size() )
        {
            // if the current element is the one we want
            if( nums[index] == elem_found )
                // skip all its copies
                while( nums[index] == elem_found )
                {
                    ++index;
                    
                    if( index >= nums.size() )
                        break;
                }
            // otherwise
            else
                // add this to our result
                not_found.push_back( elem_found );
            
            // look for the next element
            ++elem_found;
        }
        
        // if the list has any elements notyet processed
        while( elem_found <= nums.size() )
        {
            // add these to the result
            not_found.push_back( elem_found );
            ++elem_found;
        }
        
        return not_found;
    }
};
