
class Solution:
    def findSingle(self, n, arr):
        # code here
        d={}
        for i in arr:
            if i not in d:
                d[i]=1
            else:
                d[i]=d[i]+1
        for i in d:
            if d[i]%2!=0:
                return i
