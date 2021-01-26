class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = 0;
        int next = 0;
        
        if( nums.size() <= 1 )
            return nums.size();
        while( next < nums.size() )
        {
            if( nums[current] == nums[next] )
            {
                while( next < nums.size() && (nums[current] == nums[next]) )
                    ++next;
                
                nums[current] = nums[next-1];
                //++current;
                
            }
            else
            {
                ++current;
                nums[current] = nums[next];
                //++current;
                ++next;
            }
        }
        
        if( next == 0 )
            return 0;
        
        return current+1;
    }
};
