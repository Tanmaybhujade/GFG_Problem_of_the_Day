void printCorner(Node *root)
{

 if(!root) return;
    queue<Node*> store;
    store.push(root);
    store.push(NULL);
    int count = 2;
    while(!store.empty())
    {
        Node *front = store.front();
        store.pop();
        count++;
        if(front->left) store.push(front->left);
        if(front->right) store.push(front->right);
        if(store.front() == NULL)
        {
            store.pop();
            if(count != 1)
            {
            cout<<front->data<<" ";
            }
            if(!store.empty())
            { 
                store.push(NULL);
                cout<<store.front()->data<<" ";
            }
            count = 0;
        }
    } 

}
