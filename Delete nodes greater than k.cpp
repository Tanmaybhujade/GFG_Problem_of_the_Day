class Solution{
  public:
    /*The function should return the root of the modified tree*/
    Node* deleteNode(Node* root, int k)
    {
        
       if(!root) return root;
       if(root->data == k) return root->left;
       else if(root->data > k) return deleteNode(root->left,k); 
       root->right=deleteNode(root->right,k);
       return root;
   }
};
