class Solution:
    def findUnion(self,arr1,arr2,n,m):
        a = set(arr1)
        b = set(arr2)
        return sorted(list(a|b))
