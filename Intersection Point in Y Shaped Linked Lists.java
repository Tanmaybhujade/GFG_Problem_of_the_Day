class Intersect
{
    //Function to find intersection point in Y shaped Linked Lists.
	int intersectPoint(Node head1, Node head2)
	{
         int ct1=0;
         Node temp=head1;
         while(temp!=null) {
             ct1++;
             temp=temp.next;
         }
         int ct2=0;
         temp=head2;
         while(temp!=null) {
             ct2++;
             temp=temp.next;
         }
         while(ct1>0 && ct2>0 && head1!=null && head2!=null) {
             if(ct1<ct2) {
                 head2=head2.next;
                 ct2--;
             } else if(ct1>ct2) {
                 head1=head1.next;
                 ct1--;
             } else {
                 if(head1==head2) return head1.data;
                 head1=head1.next;
                 head2=head2.next;
                 ct1--;
                 ct2--;
             }
         }
         return -1;
	
	}
}
