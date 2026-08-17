class Solution {
    public String longestPalindrome(String s) {
        StringBuilder t = new StringBuilder("^");

        for (char c : s.toCharArray()) {
            t.append("#").append(c);
        }

        t.append("#$");

        int n = t.length();
        int[] p = new int[n];

        int c = 0, r = 0;
        int maxLen = 0, center = 0;

        for (int i = 1; i < n - 1; i++) {
            int mirror = 2 * c - i;

            if (i < r) {
                p[i] = Math.min(r - i, p[mirror]);
            }

            while (t.charAt(i + 1 + p[i]) == t.charAt(i - 1 - p[i])) {
                p[i]++;
            }

            if (i + p[i] > r) {
                c = i;
                r = i + p[i];
            }

            if (p[i] > maxLen) {
                maxLen = p[i];
                center = i;
            }
        }

        int start = (center - maxLen) / 2;

        return s.substring(start, start + maxLen);
    }
}