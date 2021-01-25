class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        // goto last element
        int i = arr.size() - 1;
        
        // create variable to hold max value
        int max_ = arr[i];
        
        // set last element as -1
        arr[i] = -1;
        
        // goto prev elem
        --i;
        
        // repeat following for all elements
        for( ; i >= 0; --i )
        {
            // store current element
            int temp = arr[i];
            
            // update current element
            arr[i] = max_;
            
            // update max value
            max_ = max( max_, temp);
        }
        
        
        return arr;
    }
};
