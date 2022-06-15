int chocolates(int arr[], int n)
{

       int start=0,end=n-1;
       while(start!=end)
       {
           if(arr[start]>arr[end])
           {
               start++;
               
           }
           else 
           {
               end--;
           }
           
       }
       return arr[start];
   
    
}
