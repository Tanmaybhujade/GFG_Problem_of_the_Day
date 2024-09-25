class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        Node* t1=head;
        vector<int>v1;
        while(t1){
            v1.push_back(t1->data);
            t1=t1->next;
        }
        int n=v1.size();
        for(int i=0;i<n/2;i++){
            if(v1[i]!=v1[n-i-1]) return false;
        }
        return true;
    }
};
