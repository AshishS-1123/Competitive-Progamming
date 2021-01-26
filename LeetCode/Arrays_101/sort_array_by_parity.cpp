class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        // create variable for read operation
        int read = 1;
        // create variable for write operation
        int write = 0;
        // create variable for size of array
        int n = A.size();
        
        // if there are any even values in beginning of array
        while( A[write] % 2 == 0 )
        {
            ++write;
            if( write >= n )
                return A;
        }
        
        read = write + 1;
        
        while( read < n )
        {
            // if element being read is even
            if( A[read] % 2 == 0)
            {
                // swap read an write values
                int temp = A[read];
                A[read] = A[write];
                A[write] = temp;
                
                // increment read and write
                ++read, ++write;
            }
            else
                ++read;
        }
        
        return A;
    }
};
