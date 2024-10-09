class Solution {
    static Node construct(int arr[][]) {
        int n = arr.length;
        Node curr[] = new Node[n];
        Node prev[] = new Node[n];
        Node last = null;
        for(int i=0;i<n;i++){
            curr[i] = new Node(arr[0][i]);
            if(last!=null){
                last.right = curr[i];
            }
            last = curr[i];
        }
        Node head = curr[0];
        prev = curr;
        curr = new Node[n];
        for(int i=1;i<n;i++){
            last = null;
            for(int j=0;j<n;j++){
                curr[j] = new Node(arr[i][j]);
                if(last!=null){
                    last.right = curr[j];
                }
                last = curr[j];
                prev[j].down = curr[j];
            }
            prev = curr;
            curr = new Node[n];
        }
        return head;
    }
}
