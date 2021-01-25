class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // create a write pointer for writing
        int write = 0;
        // create a read pointer for reading
        int read = 0;
        // create a variable to hold size of array
        int n = nums.size();
        
        while( read < n )
        {
            if( nums[read] == 0 )
                ++read;
            else
            {
                nums[write] = nums[read];
                ++read, ++write;
            }
        }
        
        // for remaining elements, write zero
        while( write < n )
        {
            nums[write] = 0;
            ++write;
        }
    }
};
