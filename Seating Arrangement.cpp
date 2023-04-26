class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        for(int i=0;i<m;++i){
            if(i==0){
                if(seats[i] == 0){
                    if(seats[i+1] == 0){
                        seats[i] = 1;
                        n--;
                    }
                }
            }else if(i >= 1 && i < m-1){
                if(seats[i] == 0){
                    if(seats[i-1] == 0 && seats[i+1] == 0){
                        seats[i] = 1;
                        n--;
                    }
                }
            }else{
                if(seats[i] == 0){
                    if(seats[i-1] == 0){
                        seats[i] == 1;
                        n--;
                    }
                }
            }
        }
        
        if(n <= 0) return true;
        
        return false;
    }
};
