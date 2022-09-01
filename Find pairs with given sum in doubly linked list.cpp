class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
         Node* s = head;
        Node* e = head;
        while(e->next) e = e->next;
        int sm = 0;
        vector<pair<int, int>> res;
        while(s && e && s->data < e->data){
            sm = s->data + e->data;
            if(sm < target){
                s = s->next;
            }else if(sm > target){
                e = e->prev;
            }else{
                res.push_back({s->data, e->data});
                s = s->next;
            }
        }
        return res;
    }
};
