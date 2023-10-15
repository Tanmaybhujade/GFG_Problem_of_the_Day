class Solution:
    def inorder(self,root,ans):
        if root==None:
            return 
        self.inorder(root.left,ans)
        ans.append(root.data)
        self.inorder(root.right,ans)
    def sort(self,ans,start,end):
        if(start>end):
            return None
        mid=(start+end)//2
        temp=Node(int(ans[mid]))
        temp.left=self.sort(ans,start,mid-1)
        temp.right=self.sort(ans,mid+1,end)
        return temp
        
    def buildBalancedTree(self,root):
        #code here
        ans=[]
        self.inorder(root,ans)
        return self.sort(ans,0,len(ans)-1)
