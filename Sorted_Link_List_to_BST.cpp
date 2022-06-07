class Solution{
  public:
    TNode* sortedListToBST(LNode *head) {
    if( head == NULL )  return NULL;
        LNode *slow=head;
        LNode *fast=head;
        LNode *prev = NULL;
        while( fast && fast->next )
        {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        if( prev == NULL ) return new TNode(head->data);
        TNode *root = new TNode(slow->data);
        prev->next = NULL;
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);
        return root;
    }
};
