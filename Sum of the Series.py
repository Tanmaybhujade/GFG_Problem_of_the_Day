class Solution:
    def calculateSum(self, N, A, B): 
        import math
        n1 = N // A
        sum1 = n1 * (n1 + 1) // 2 * A
        n2 = N // B
        sum2 = n2 * (n2 + 1) // 2 * B
        lcm = (A * B) // math.gcd(A, B)
        n3 = N // lcm
        sum3 = n3 * (n3 + 1) // 2 * lcm
        
        return sum1 + sum2 - sum3
