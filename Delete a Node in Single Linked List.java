class GfG
{
    Node deleteNode(Node head, int x)
    {
	
    

    Node temp= head;
         
         if(x==1) return head.next; 
         
        while( temp != null) {
            
            if(x==2) temp.next=temp.next.next;  
            else temp =temp.next;
            x--;
        } 
        return head;




    }
}
