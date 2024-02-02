
class Solution {
    int atoi(String s) {
        if (s == null || s.length() == 0) {
            return 0;
        }

        int result = 0;
        int sign = 1;
        int i = 0;

        // Handle leading whitespaces
        while (i < s.length() && s.charAt(i) == ' ') {
            i++;
        }

        // Handle the sign
        if (i < s.length() && (s.charAt(i) == '-' || s.charAt(i) == '+')) {
            sign = (s.charAt(i) == '-') ? -1 : 1;
            i++;
        }

        // Convert the remaining characters to integer
        while (i < s.length() && Character.isDigit(s.charAt(i))) {
            int digit = s.charAt(i) - '0';

            // Check for overflow
            if (result > Integer.MAX_VALUE / 10 || (result == Integer.MAX_VALUE / 10 && digit > 7)) {
                return (sign == 1) ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }

            result = result * 10 + digit;
            i++;
        }

        // If there are non-numeric characters after the initial part, return -1
        while (i < s.length() && !Character.isDigit(s.charAt(i))) {
            return -1;
        }

        return result * sign;
    }
}
