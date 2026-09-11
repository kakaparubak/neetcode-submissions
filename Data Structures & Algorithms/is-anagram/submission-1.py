class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        anagram = True
        letters = {}

        for letter in s:
            if letters.get(letter) == None:
                letters[letter] = 1
            else:
                letters[letter] = letters.get(letter) + 1
        
        for letter in t:
            if letters.get(letter) == None:
                anagram = False
                break
            
            letters[letter] = letters.get(letter) - 1
        
        for keys, value in letters.items():
            if value != 0:
                anagram = False
                break
        
        return anagram
        