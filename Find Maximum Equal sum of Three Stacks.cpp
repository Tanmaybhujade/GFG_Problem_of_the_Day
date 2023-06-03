class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        
    
      int s1 = 0, s2 = 0, s3 = 0;
      int res = 0;
      
      for(int i = N1-1; i >= 0; i--){
           s1 += S1[i];
      }
       for(int i = N2-1; i >= 0; i--){
           s2 += S2[i];
      }
       for(int i = N3-1; i >= 0; i--){
           s3 += S3[i];
      }
      int i = 0, j = 0, k = 0;
      
      while(i < N1 && j < N2 && k < N3){
          if(s1 > s2 || s1 > s3){
             s1 -= S1[i++];
          }else 
          if(s2 > s3 || s2 > s1){
              s2 -= S2[j++];
          }
          else
          if(s3 > s2 || s3 > s1){
              s3 -= S3[k++];
          }
          
          if(s1 == s2 && s2 == s3)
          return s1;
          
      }
      
      return 0;

      
    }
};
