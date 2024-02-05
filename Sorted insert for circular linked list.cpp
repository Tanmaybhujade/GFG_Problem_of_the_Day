class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
        if (head == nullptr) {
            auto temp = new Node(data);
            temp->next = temp;
            return temp;
        }
        Node* ptr = head;
        Node* node = nullptr;
        int cnt=0; bool ok=false;
        auto temp = new Node(data);
        if (head->data >= data){
            node = head;
            ok=true;
        }
        else{
            ptr = head->next;
            int cnt=0;
            while(cnt==0){
                if (ptr == head) cnt++;
                if (cnt==1) break;
                if (ptr->data >= data) {
                    node=ptr; 
                    break;
                }
                ptr = ptr->next;
            }
            if (node==nullptr){
                node=head;
            }
        }
        ptr=head;
        while(true){
            if (ptr->next == node) break;
            ptr=ptr->next;
        }
        temp->next = node;
        ptr->next=temp;
        if (ok) head=temp;
        return head;
    }
};
