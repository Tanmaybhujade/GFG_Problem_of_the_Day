
class Solution {
    ArrayList<Integer> removeDuplicate(int arr[]) {
        // code here
        LinkedHashSet<Integer> set= new LinkedHashSet<>();
        
        for(int el: arr){
            set.add(el);
        }
        
        return new ArrayList<>(set);
    }
}
