class Solution:
    def genIp(self, s):
        ans =[]
        def solve(s,q):
            #print(s,q)
            if len(s)==0:
                if len(q)==4:
                    ans.append('.'.join(q))
                return
            for i in range(1,len(s)+1):
                if 0<=int(s[:i])<256 and ((len(s[:i])==1 and int(s[:i])==0) or s[:i][0]!='0'):
                    solve(s[i:],q+[s[:i]])
                else:
                    break
        solve(s,[])
        return ans
