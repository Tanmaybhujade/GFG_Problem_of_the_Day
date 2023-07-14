class twoStacks
{
    //Function to push an integer into the stack1.
    int[] res = new int[100];
    int a1 = 0, a2 = -1;
    int b1 = 99, b2 = 100;
    void push1(int x)
    {   
        a2++;
        res[a2] = x;
    }
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       b2--;
       res[b2] = x;
    }
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(a1>a2)return -1;
        return res[a2--];
    }
    //Function to remove an element from top of the stack2.
    int pop2()
    {
        if(b2>b1)return -1;
        return res[b2++];
    }
}
