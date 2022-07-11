class Complete{
    
   
    // Function for finding maximum and value pair
    public static ArrayList<Integer> reaching_height (int n, int arr[]) {
            Arrays.sort(arr);
       ArrayList<Integer> lt = new ArrayList<Integer>();
       int i = 0;
       int j = n - 1;
       int sum = 0;
       while (i <= j) {
           if (i < j) {
               lt.add(arr[j]);
               lt.add(arr[i]);
               sum = sum + (arr[j] - arr[i]);
               i++;
               j--;
               
           }
           else if (i==j){
               lt.add(arr[i]);
               sum = sum - arr[i] ;
               i++;
               j--;
           }
       }
       if (sum != 0) {
           return lt;
       } else {
           lt.clear();
           lt.add(-1);
           return lt;
       }
    }
    
    
}
