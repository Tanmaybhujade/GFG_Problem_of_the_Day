
class Solution:
    def minOperation(self, n):
        c = 0
        while n > 0:
            if n % 2 == 0:
                n //= 2
            else:
                n -= 1
            c += 1
        return c
