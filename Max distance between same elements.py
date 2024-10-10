class Solution:
    # Your task is to Complete this function
    # functtion should return an integer
    def maxDistance(self, arr):
        dict={}
        for i in range(len(arr)):
            if arr[i] not in dict:
                dict[arr[i]]=[i]
            else:
                dict[arr[i]].append((i))
        
        arr=[]
        for i in dict:
            arr.append(dict[i][-1]-dict[i][0])
        return max(arr)
