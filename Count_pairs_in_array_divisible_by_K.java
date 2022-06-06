class Solution
{
    public static long countKdivPairs(int arr[], int n, int k)
    {
        HashMap<Integer,Integer>hm = new HashMap<>();
       Long count = 0L ; 
       for( int i : arr ) { 
           int rem = i % k ;
           count+= hm.containsKey(k-rem) ? hm.get(k-rem) : 0 ; 
           count+= (rem == 0 && hm.containsKey(rem)) ? hm.get(rem) : 0 ; 
           hm.put(rem,hm.getOrDefault(rem,0)+1) ;
       }
       return count ;
    }
}
