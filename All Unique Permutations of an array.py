
class Solution:
    def uniquePerms(self, arr, n):
        def solve(ans,arr,i):
            if i==len(arr):
                ans.add(tuple(arr))
                return
            for j in range(i,len(arr)):
                arr[i],arr[j]=arr[j],arr[i]
                solve(ans,arr,i+1)
                arr[i],arr[j]=arr[j],arr[i]
        ans=set()
        solve(ans,arr,0)
        return sorted(list(ans))
