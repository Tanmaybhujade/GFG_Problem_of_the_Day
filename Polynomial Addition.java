class Solution
{
    public static Node addPolynomial(Node p1,Node p2)
    {
          Node res = new Node(0,0);
        Node root = res;
        while(p1 != null && p2 != null)
        {
            Node temp;
            if(p1.pow == p2.pow)
            {
               temp = new Node(p1.coeff + p2.coeff,p1.pow);
                p1 = p1.next;
                p2 = p2.next;
            }
            else if(p1.pow > p2.pow)
            {
                temp = new Node(p1.coeff,p1.pow);
                p1 = p1.next;
            }
            else
            {
                temp = new Node(p2.coeff,p2.pow);
                p2 = p2.next;
            }
            res.next = temp;
            res = temp;
        }
        
        if(p1 != null) res.next = p1;
        if(p2 != null) res.next = p2;
        
        return root.next;
    }
}
