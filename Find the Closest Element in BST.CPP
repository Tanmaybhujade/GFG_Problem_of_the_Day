class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    int minDiff(Node *root, int K)
    {
         int l,r;
        if((root->data)==K)
        return 0;
        else
        {  
            if(root->left!=NULL)
            {
             l= min(minDiff(root->left, K), abs((root->data)-K));
                
            }
            else
            l= min(abs((root->data)-K),INT_MAX);
            
            if(root->right!=NULL)
            {
             r= min(minDiff(root->right, K), abs((root->data)-K));
                
            }
            else
            r=min(abs((root->data)-K),INT_MAX);
            
        }
        return (min(l,r)>abs((root->data)-K)?abs((root->data)-K):min(l,r));
    }
};
