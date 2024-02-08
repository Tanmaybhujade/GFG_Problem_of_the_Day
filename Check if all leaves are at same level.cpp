
class Solution{
  public:
    /*You are required to complete this method*/
    int val=-1;
    bool check(Node *root,int level=0)
    {
        if(root==NULL) return true;
        if((root->left==NULL)&&(root->right==NULL))
        {
            if(val==-1) val=level;
            else
            
            if(val!=level) return false;
            
            return true;
        }
        
        if(check(root->left,level+1)==false) return false;
        
        if(check(root->right,level+1)==false) return false;
        
        return true;
    }
};
