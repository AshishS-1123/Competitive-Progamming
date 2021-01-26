class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int max_num = 0;
        int current_max_num = 0;
        int length = nums.size();
        
        for( int i = 0; i < length; ++i )
        {
            if( nums[i] == 0 )
            {
                max_num = max( max_num, current_max_num );
                current_max_num = 0;
            }
            else
            {
                ++current_max_num;
            }
        }
        
        max_num = max(max_num, current_max_num);
        
        return max_num;
    }
};
