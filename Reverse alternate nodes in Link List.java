class Solution
{
    public static void rearrange(Node odd)
    {
        // add your code here
        Node even=odd.next;
        Node ep=even;
        Node op=odd;
        while(ep!=null && op.next!=null)
        {
            op.next=ep.next;
            if(op.next!=null)
            {
            op=op.next;
            ep.next=op.next;
            ep=ep.next;
            }
            
        }
        op.next=reverse(even);
        
    }
    static Node reverse(Node head)
    {
        Node curr=head;
        Node prev=null;
        while(curr!=null)
        {
            Node nc=curr.next;
            curr.next=prev;
            prev=curr;
            curr=nc;
        }
        return prev;
    }
    
}
