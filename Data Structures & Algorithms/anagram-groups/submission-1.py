class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = {}

        for string in strs:
            alphabet = [0] * 26
            for letter in string:
                alphabet[ord(letter) - 97] = alphabet[ord(letter) - 97] + 1

            newAlpha = [""] * 26
            for index, num in enumerate(alphabet):
                newAlpha[index] = str(num)
            keyString = ",".join(newAlpha)

            if result.get(keyString) == None:
                result[keyString] = [string]
            else:
                temp = result.get(keyString)
                temp.append(string)
                result[keyString] = temp

        resultList = []
        for key, value in result.items():
            resultList.append(value)
        
        return resultList