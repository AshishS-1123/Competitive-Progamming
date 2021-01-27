class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;
        
        bool is_int_min = false;
        
        for( int i = 0; i < nums.size(); ++i )
        {
            if( nums[i] == INT_MIN )
                is_int_min = true;
            
            if( nums[i] >= first )
            {
                if( nums[i] == first )
                    continue;
                
                third = second;
                second = first;
                first = nums[i];
            }
            else if( nums[i] >=second )
            {
                if( nums[i] == second )
                    continue;
                
                third = second;
                second = nums[i];
            }
            else if( nums[i] >=third )
            {
                third = nums[i];
            }
            
        }
        
        
        if( is_int_min && second == INT_MIN )
            return first;
        
        if( is_int_min && third == INT_MIN )
            return INT_MIN;
        
        if( second == INT_MIN || third == INT_MIN )
            return first;
        
        
        return third;
    }
};
