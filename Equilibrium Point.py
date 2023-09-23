
class Solution:
   def equilibriumPoint(self,A, n):
        # Your code here
        l=list(A)
        r=list(A)
        
        for i in range(1,n):
            l[i]=l[i]+l[i-1]
            
        for i in range(n-2,-1,-1):
            r[i]=r[i]+r[i+1]
            
        
        
        for i in range(n):
            if l[i]==r[i]:
                return i+1
                
        return -1
