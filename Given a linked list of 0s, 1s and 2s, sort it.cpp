class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        while(head != NULL){
            if(head->data == 0) zeros++;
            else if(head->data == 1) ones++;
            else if(head->data == 2) twos++;
            head = head->next;
        }
        while(twos>0){
            struct Node* n = new Node(2);
            n->next = head;
            head = n;
            twos--;
        }
        while(ones>0){
            struct Node* n = new Node(1);
            n->next = head;
            head = n;
            ones--;
        }
        while(zeros>0){
            struct Node* n = new Node(0);
            n->next = head;
            head = n;
            zeros--;
        }
        return head;
    }
