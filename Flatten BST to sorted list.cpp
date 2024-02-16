
class Solution
{
public:
    Node* flatten(Node* root){
        // code here
        if(root==NULL || root->left==NULL && root->right==NULL)
            return root;
        if(root->left!=NULL){
            flatten(root->left);
            
            Node* temp=root->right;
            root->right=root->left;
            root->left=NULL;
            
            Node *t=root->right;
            while(t->right!=NULL){
                t=t->right;
                
            }
            t->right=temp;
        }
        
        flatten(root->right);
    }
    Node *flattenBST(Node *root)
    {
        flatten(root);
        vector<int>arr;
        Node* temp=root;
        
        while(temp!=NULL){
            int n=temp->data;
            arr.push_back(n);
            temp=temp->right;
        }
        //cout<<temp->data<<endl;
        sort(arr.begin(),arr.end());
        temp=root;
        int i=0;
        while(temp!=NULL){
            temp->data=arr[i++];
            temp=temp->right;
        }
        return root;
            
    }
};
