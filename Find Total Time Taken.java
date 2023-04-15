class Solution
{
    public static long totalTime(int n,int arr[],int time[])
    {
       HashMap<Integer , Integer> map = new HashMap<>();
        long timeTaken = -1;


        for(int i = 0 ; i < n ; i++){
            if(map.containsKey(arr[i])){
                
                timeTaken = timeTaken + time[arr[i]-1];
                
                
            }else{
                map.put(arr[i] , time[i]);
                timeTaken++;
                
            }
            
        }
        return timeTaken; 
    }
}
