class Solution
{
    char firstRep(String S)
    {
        char c = '#';
        HashSet<Character> hs = new HashSet<>();
        for(int i=S.length()-1;i>=0;i--)
        {
            if(hs.contains(S.charAt(i)))
            {
                c = S.charAt(i);
            }
            else
            {
                hs.add(S.charAt(i));
            }
        }
        return c;
    }
}
