
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
      unordered_set<int>mp;
     Node* t=head;
     
     Node* prev=t;
     while(t)
     {
         if(mp.find(t->data)==mp.end())
         {
             mp.insert(t->data);  //if not duplicate insert and move ptrs ahead
             prev=t;
             t=t->next;
         }
         else{ 
             prev->next=t->next;   //if duplicate skip the t node
             t=t->next;
            }
      }
     return head;
     
    }
};
