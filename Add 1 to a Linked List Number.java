class Solution {
Node a=null;
    Node b=null;
    int number=0;
    int sum=0;
    int count=0;
public  Node addOne(Node head) {

    if (count == 0) {
        a = head;
        b = head;
    }
    count++;
    if (head.next == null) {
        if (count == 1) {
            head.data = head.data + 1;
            return head;
        }
        sum = (sum * 10 + head.data) + 1;
        if (sum < 10) {
            count = 0;
            head.data = head.data + 1;
            return a;
        } else {
            number = sum % 10;
            head.data = number;
            sum = sum / 10;
            return head;
        }

    }
    addOne(head.next);
    if (count != 0) {
        count--;
        sum = sum + head.data;
        if (count == 1 && sum >= 10) {
            number = sum % 10;
            head.data = number;
            sum = sum / 10;
            Node c = new Node(sum);
            c.next = head;
            return c;
        }
        number = sum % 10;
        head.data = number;
        sum = sum / 10;
    }
    return a;

}
}
