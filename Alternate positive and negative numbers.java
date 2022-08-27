
class Solution {
    void rearrange(int arr[], int n) {
        ArrayList<Integer> pos = new ArrayList<>();
        ArrayList<Integer> neg = new ArrayList<>();
        for(int x : arr){
            if(x < 0) neg.add(x);
            else pos.add(x);
        }
        
        int i=0,j=0,m=pos.size(); 
        n=neg.size();
        for(int x=0; x<arr.length;){
            if(i<m){
                arr[x] = pos.get(i);
                x++; i++;
            }
            if(j<n){
                arr[x] = neg.get(j);
                x++; j++;
            }
        }
    }
}
