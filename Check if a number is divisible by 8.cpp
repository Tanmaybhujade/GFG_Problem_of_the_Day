
class Solution{
    public:
    int DivisibleByEight(string s){
        return stoi(s.substr(max(0,(int)s.size()-3))) % 8 == 0 ? 1 : -1;
    }
};
