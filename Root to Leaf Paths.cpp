
class Solution {
  public:
  
  vector<vector<int>> ans;
  
  
  void solve(Node*root,vector<int>&temp){
      
      
      if(root==NULL) return ;
      
      if(root->left==NULL and root->right==NULL){
          temp.push_back(root->data);
          ans.push_back(temp);
           temp.pop_back();
          return;
      }
      
      temp.push_back(root->data);
      
      solve(root->left,temp);
    
   
      solve(root->right,temp);
      if(!temp.empty())
      temp.pop_back();
      
      
      
  }
  
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<int> temp;
        solve(root,temp);
        return ans;
    }
};
