class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp( nums1.begin(), nums1.begin()+m);
        
        int index_1 = 0;
        int index_2 = 0;
        int index = 0;
        
        while( index_1 < m && index_2 < n )
        {
            if( temp[index_1] < nums2[index_2] )
            {
                nums1[index] = temp[index_1];
                ++index_1;
                ++index;
            }
            else
            {
                nums1[index] = nums2[index_2];
                ++index_2;
                ++index;
            }
        }
        
        for(; index_1 < m; ++index_1)
        {
            nums1[index] = temp[index_1];
            ++index;
        }
        for(; index_2 < n; ++index_2)
        {
            nums1[index] = nums2[index_2];
            ++index;
        }
        
    }
};
