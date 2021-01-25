class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        even_digits = 0
        
        for number in nums:
            str_num = str( number )
            
            if len(str_num) % 2 == 0:
                even_digits += 1
                
        return even_digits
