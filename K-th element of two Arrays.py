
class Solution:
    def kthElement(self, k, arr1, arr2):
        arr3 = arr1 + arr2
        arr3.sort()
        
        return arr3[k-1]
        
