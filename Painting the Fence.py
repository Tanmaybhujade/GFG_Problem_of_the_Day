class Solution:
    def countWays(self,a,b):
        fi = b
        se = b**2
        if a == 1:
            return b
        sum1 = b**2
        for i in range(a-2):
            sum1 = ((fi + se)*(b-1)) % ((10**9)+7)
            fi = se
            se = sum1
        return sum1
