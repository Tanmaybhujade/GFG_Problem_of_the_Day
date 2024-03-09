
class Solution {
    public char nthCharacter(String s, int r, int n) {
        StringBuilder sb = new StringBuilder(s);
        for (int j = 0; j < r; j++) {
            StringBuilder temp = new StringBuilder(sb.length() * 2);
            for (int i = 0; i < sb.length(); i++) {
                char ch = sb.charAt(i);
                temp.append(ch == '0' ? "01" : "10");
                if(temp.toString().length()>n)
                break;
            }
            sb = temp;
        }
        return sb.charAt(n);
    }
}
