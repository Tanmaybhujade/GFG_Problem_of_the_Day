class Solution {
    public static int gcd(int a,int b)
    {
        if(a==0) return b;
        if(b==0) return a;
        if(a==b) return a;
        if(a>b) return gcd(a-b,b);
        return gcd(a,b-a);
    }
    public static int countFractions(int n, int[] numerator, int[] denominator) {
        // code here
        int fractions=0;
        for(int i=0;i<n;i++)
        {
            int gcd=gcd(numerator[i],denominator[i]);
            numerator[i]/=gcd;
            denominator[i]/=gcd;
        }
        Hashtable<List<Integer>,Integer> hash=new Hashtable<>();
        for(int i=0;i<n;i++)
        {
            int x=numerator[i];
            int y=denominator[i];
            int z=y-x;
            List<Integer> lst=new ArrayList<>();
            lst.add(z);
            lst.add(y);
            if(hash.get(lst)!=null)
            {
                fractions+=hash.get(lst);
            }
            List<Integer> lst2=new ArrayList<>();
            lst2.add(x);
            lst2.add(y);
            if(hash.get(lst2)!=null)
            {
                hash.replace(lst2,hash.get(lst2)+1);
            }
            else
            {
                hash.put(lst2,1);
            }
        }
        return fractions;
    }
}
      
    
