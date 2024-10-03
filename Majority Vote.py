
class Solution:
    # Function to find the majority elements in the array
    def findMajority(self, nums):
        #Your Code goes here.
        onethird = len(nums)/3
        d = {}
        ans = []
        for i in nums:
            if i not in d:
                d[i] = 0
            d[i] += 1
        del nums
        for key, val in d.items():
            if val > onethird:
                ans.append(key)
        del d
        return ans if ans else [-1]
