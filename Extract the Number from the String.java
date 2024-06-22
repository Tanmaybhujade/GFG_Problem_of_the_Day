class Solution {
    long ExtractNumber(String sentence) {
        String[] str = sentence.split(" ");
        long ans = -1;
        for (String s : str) {
            boolean ok = false;
            for (char ch : s.toCharArray()){
                if (Character.isDigit(ch) && ch != '9') ok = true;
                else {
                    ok = false;
                    break;
                }
            }
            if (ok) ans = Math.max(ans, Long.parseLong(s));
        }
        return ans;
    }
}
