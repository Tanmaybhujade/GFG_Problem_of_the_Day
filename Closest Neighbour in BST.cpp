

class Solution {
  public:
  vector<int> ans;
  void printInorder(Node* root)
{
    if (root == NULL)
        return;
    printInorder(root->left);
    ans.push_back(root->key);
    printInorder(root->right);
}
    int findMaxForN(Node* root, int n) {
        // code here
        printInorder(root);
        int maxi=-1;
        for(int i=0; i<ans.size(); i++){
            if(ans[i]<=n){
                maxi=ans[i];
            }
        }
        return maxi;
    }
};
