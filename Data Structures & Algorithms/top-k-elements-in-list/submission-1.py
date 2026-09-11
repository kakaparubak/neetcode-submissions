class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqmap = {}
        for num in nums:
            if freqmap.get(num) == None:
                freqmap[num] = 1
            else:
                freqmap[num] += 1
        
        num_map = {}
        freq_arr = []
        for key, value in freqmap.items():
            freq_arr.append(value)
            if num_map.get(value) == None:
                num_map[value] = [key]
            else:
                temp = list(num_map[value])
                temp.append(key)
                num_map[value] = temp

        freq_arr.sort(reverse=True)
        res = []
        i = 0
        while i < k:
            list_len = len(list(num_map[freq_arr[i]]))
            curr_list = list(num_map[freq_arr[i]])
            
            for num in curr_list:
                res.append(num)

            i += list_len
        
        return res