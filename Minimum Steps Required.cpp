
int minSteps(string str) {
       char prev = str[0];
    int count = 1;
    for(auto it:str){
        if(prev != it)
            count++;
        prev = it;
    }
    if(count % 2)
        return (count + 1)/2;
    return (count + 2)/2;
}
