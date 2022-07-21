class GetMin
{
    static Stack<Integer> stack;
    //Function to push all the elements into the stack.
    public static Stack<Integer> _push(int arr[],int n)
    {
        
        stack = new Stack<>();
        for(int i = 0; i < n; i++){
            if(stack.empty())
                stack.push(arr[i]);
            else{
                int top = stack.peek();
                if(top<=arr[i]){
                    stack.push(top);
                }else{
                    stack.push(arr[i]);
                }
            }
        }
        return stack;
    }
    
    //Function to print minimum value in stack each time while popping.
    static void _getMinAtPop(Stack<Integer>s)
    {
        
        while(!s.empty()){
            int top = s.pop();
            System.out.print(top+" ");
        }
        return;
    }
}
