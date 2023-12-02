class Solution:
    def isRepresentingBST(self, arr, N):
        # code here
        return 1 if sorted(arr)==arr else 0
