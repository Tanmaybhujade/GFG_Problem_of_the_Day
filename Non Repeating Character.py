
class Solution:
    def nonrepeatingCharacter(self,s):
        #code here
        for i in range(len(s)):
            if(s.count(s[i])==1):
                return s[i]
                break
        else:
            return "$"
