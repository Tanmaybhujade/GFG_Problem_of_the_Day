class Solution{

    static List<Long> minimumSquares(long L, long B)

    {

        // code here

        List<Long> ans = new ArrayList<>();

 

 

long min = Math.min(L, B);

long k1 = 1, res  =  1,  L1 = L, B1 =  B;

while(k1<=min)

{

    if(L1%k1==0 && B1%k1==0)

    {

        res*=k1;

        L1=  L1/k1;

        B1 = B1/k1;

        k1 = 1;

        min = Math.min(L1, B1);

    }

 

        k1++;

 

}

 

long areaRectangle = L*B;

long areaSquare = res *  res;

 

long number = (long)areaRectangle /areaSquare ;

 

ans.add(number);

ans.add(res);

return ans;

    }

}
