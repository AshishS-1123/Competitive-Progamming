class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int current = 0;
        int next = 0;
        
        while( next < nums.size() )
        {
            if( nums[next] != val )
            {
                nums[current] = nums[next];
                ++current, ++next;
            }
            else
            {
                ++next;
            }
        }
        
        return current;
    }
};
