class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        if(n==0)
            return 0;
        
        unsigned int count = 0;
        while(!(n&1)){
            count++;
            n >>= 1;
        }
        return count+1;
    }
};
