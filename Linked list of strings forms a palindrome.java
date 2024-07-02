
class Solution {
    public boolean compute(Node root) {
        
        String sb="";
        Node temp=root;
        while(temp!=null){
            sb+=temp.data;
            temp=temp.next;
        }
        int i=0;
        int j=sb.length()-1;
        while(i<j){
            if(sb.charAt(i)!=sb.charAt(j)){
                return false;
            }
            j--;
            i++;
        }
        return true;
    }
}
