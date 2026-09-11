class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        num_in_nums = {}
        is_duplicate = False

        for i in nums:
            if num_in_nums.get(i) == None:
                num_in_nums[i] = 1
            else:
                is_duplicate = True
                break
        
        return is_duplicate