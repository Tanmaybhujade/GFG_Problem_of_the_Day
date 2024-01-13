class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
    
        //code here
        vector<int>v;
        for(struct Node* curr = head_ref;curr!=NULL;curr=curr->next){
            v.push_back(curr->data);
        }
        sort(v.begin(),v.end());
        struct Node* temp = new Node(-1);
        struct Node* t = temp;
        for(auto it:v){
            struct Node* p = new Node(it);
            t->next = p;
            t=p;
        }
        return temp->next;
        
        
        
    }
    
};
