
class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,str):
        # code here 
        word=str.split('.')
        reverse_word=word[::-1]
        return ".".join(reverse_word)
