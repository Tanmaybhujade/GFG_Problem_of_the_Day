
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
     int countZero = 0;
        int countOne = 0;
        int countTwo = 0;
        
        for(int i=0; i<arr.size(); i++) {
            
            if(arr[i] == 0) countZero++;
            else if(arr[i] == 1) countOne++;
            else countTwo++;
        }
        
        for(int i=0; i<arr.size(); i++) {
            if(countZero != 0) {
                arr[i] = 0;
                countZero--;
            }
            else if(countOne != 0) {
                arr[i] = 1;
                countOne--;
            }
            else {
                arr[i]=2;
                countTwo--;
            }
        }
    }
};
