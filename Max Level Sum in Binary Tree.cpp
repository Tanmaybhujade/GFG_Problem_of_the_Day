class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
       queue<Node*> q;

       q.push(root);

       int maxi=INT_MIN;

       while(!q.empty()){

           int n=q.size();

           int sum=0;

           while(n--){

               Node *temp=q.front();

               q.pop();

               sum=sum+temp->data;

               if(temp->left) q.push(temp->left);

               if(temp->right) q.push(temp->right);

           }

           maxi=max(sum,maxi);

       }

       return maxi;

    }
};
