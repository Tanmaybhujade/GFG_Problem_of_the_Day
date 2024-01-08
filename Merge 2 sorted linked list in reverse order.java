class GfG
{
    Node reverse(Node head){
        Node curr = head;
        Node p = null;
        Node n = null;
        while(curr != null){
            n = curr.next;
            curr.next = p;
            p = curr;
            curr = n;
        }
        return p;
    }
    Node mergeResult(Node node1, Node node2)
    {
	// Your code here
	Node t1 = node1;
	Node t2 = node2;
	Node temp = new Node(-1);
	Node t = temp;
	while(t1 != null && t2 != null){
	    if(t1.data < t2.data){
	        t.next = t1;
	        t = t1;
	        t1 = t1.next;
	    }else{
	        t.next = t2;
	        t = t2;
	        t2 = t2.next;
	    }
	}
	while(t1 != null){
	    t.next = t1;
	    t = t1;
	    t1 = t1.next;
	}
	while(t2 != null){
	    t.next = t2;
	    t = t2;
	    t2= t2.next;
	}
	Node ans = reverse(temp.next);
	return ans;
    }
}
