class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // map the elemnts with their indices
        multimap<int, int> m;
        
        // insert elemtns in map
        for(int i = 0; i < nums.size(); ++i)
        {
            m.insert({nums[i], i});
        }
        
        // sort the vector
        sort(nums.begin(), nums.end());
        
        // we will use two poitner method
        int left = 0;
        int right = nums.size()-1;
        
        // sum of current elements
        int sum;
        
        // vector to store answer
        vector<int> ans(2,0);
        
        while(1)
        {
            // calculate the sum
            sum = nums[left] + nums[right];
            cout << "left and right " << left << " " << right << endl;
            cout << "Sum elemts " << sum << " " << nums[left] << " " << nums[right] << endl;
            
            // check if left and right are equal
            if(left == right)
                break;
            // check if sum has been achieved
            if( sum == target )
            {
                cout << "Sum\n";
                ans[0] = left;
                ans[1] = right;
                break;
            }
            // if sum is more than wanted
            else if( sum > target )
            {
                cout << "right\n";
                // decrement right
                --right;
            }
            else
            {
                cout << "left\n";
                // increment left
                ++left;
            }
        }
        
        // compute the actual indces
        
        ans[0] = m.equal_range(nums[left]).first->second;    
        ans[1] = (--m.equal_range(nums[right]).second)->second;
        cout << "Final " << ans[0] << " " << ans[1]<< endl;
        
        
        
        return ans;
    }
};
