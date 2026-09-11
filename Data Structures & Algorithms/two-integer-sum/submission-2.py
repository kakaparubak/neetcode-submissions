class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash = {}
        
        for index, value in enumerate(nums):
            diff = hash.get(target - value)
            if diff != None:
                return [diff, index]
            else:
                hash[value] = index