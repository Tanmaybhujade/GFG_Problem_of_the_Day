
class Solution {
    public static int buyMaximumProducts(int n, int k, int[] price) {
        // code here
        TreeMap<Integer, Integer> hm = new TreeMap<>();
        for(int i=0; i<n;i++){
            hm.put(price[i], hm.getOrDefault(price[i],0)+i+1);
        }
        int ans =0;
        for(Map.Entry<Integer,Integer> entry : hm.entrySet()){
            while(entry.getValue()>0 && k>= entry.getKey()){
                k-= entry.getKey();
                ans++;
                entry.setValue(entry.getValue()-1);
            }
            
        }
        return ans;
    }
}
