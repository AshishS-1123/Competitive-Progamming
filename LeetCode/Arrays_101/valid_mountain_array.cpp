class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        
        if( n < 3 )
            return false;
        
        int i = 0;
        bool uphill = true;
        
        // repeat for all elements
        while( i+1 < n )
        {
            // we are at the top of hill
            if( arr[i] >= arr[i+1] )
                break;
            ++i;
        }
        
        // if there is no uphill
        if( i == 0 )
            return false;
        
        // if all elements have been processed
        if( i+1 == n )
        {
            // check last and second last element
            if( arr[i-1] > arr[i] )
                return true;
            else
                return false;
        }
        
        // repeat for downhill elements
        while( i+1 < n )
        {
            // if there is any downhill element
            if( arr[i] <= arr[i+1] )
                return false;
            ++i;
        }
        
        // check last and second last element
        if( arr[i-1] < arr[i] )
            return false;
        
        return true;
    }
};
