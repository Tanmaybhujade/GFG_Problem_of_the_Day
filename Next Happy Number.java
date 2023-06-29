class Solution{

    static int nextHappy(int N){
        // code here
        while(true){
            N++;
            if(happy(N)==1){
                return N;
            }
        }
        
    }
    static int happy(int i){
        if(i<=9){
            if(i==1 || i==7) return 1;
            else return 0;
        }
        int sum=0;
        while(i>0){
            int x=i%10;
            sum+=(x*x);
            i=i/10;
        }
        return happy(sum);
    }
}
