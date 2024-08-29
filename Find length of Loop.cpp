
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node *p=head;
        int i=-1;
        while(p!=NULL && p->data>=0){
            p->data=i;
            i--;
            p=p->next;
        }
        if(p!=NULL) return p->data - i;
        return 0;
    }
};
