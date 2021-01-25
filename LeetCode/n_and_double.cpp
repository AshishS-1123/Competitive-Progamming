class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> arr_set;
        
        for( int i = 0; i < arr.size(); ++i )
        {
            
            if( arr_set.find( arr[i] * 2 ) != arr_set.end() )
                return true;
            if( arr[i] % 2 == 0 )
                if( arr_set.find( arr[i] / 2 ) != arr_set.end() )
                    return true;
            
            arr_set.insert( arr[i] );
            
        }
        
        return false;
    }
};
