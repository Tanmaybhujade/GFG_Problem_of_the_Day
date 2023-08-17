class Solution{
public:
    bool check(int num[], int n){
        int i = (n-1)/2;
        int j = n/2;
        
        while(i>=0){
            if(num[i]>num[j])
                return 0;
           else if(num[i]<num[j])
                return 1;
           else
            i--;
            j++;
        }
        return 1;
    }
    
    bool checkAllNine(int num[],int n){
        for(int i=0;i<n;i++)
            if(num[i] != 9)
                return 0;
                
        return 1;
    }
    
    vector<int> generateNextPalindrome(int num[], int n) 
    {
        int i = (n-1)/2;
        int j = n/2;
        
        if(checkAllNine(num,n)){
            vector<int>v(n+1,0);
            v[0] = 1;
            v[n] = 1;
            
            return v;
        }
        
        vector<int>ans;
        bool flag = check(num,n);
        
        while(i>=0){
            if(flag){
                if(num[i] == 9){
                    num[i] = 0;
                    flag = 1;
                }else{
                    num[i]++;
                    flag = 0;
                }
            }
       
            num[j] = num[i];
            i--;
            j++;
        }
        
        for(int i=0;i<n;i++)
            ans.push_back(num[i]);
            
       return ans;
    }
};
