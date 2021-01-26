class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> transformed( arr.size() );
        
        int index = 0;
        int size = arr.size();
        cout << size << " dfsdf\n";
        
        for( int i = 0; i < size; ++i )
        {
            if( index < size ){
                transformed[ index ] = arr[i];
                ++index;
            
                if( arr[i] == 0 && index < size ) {
                    transformed[ index ] = arr[i];
                    ++index;
                }
            
                if( index > size )
                    break;
            }
        }
        
        for(int i = 0; i < size; ++i)
            arr[i] = transformed[i];
    }
};
