class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;

        int start = 0, maxLen = 1;

        auto expand = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) {
                int currLen = r - l + 1;
                if (currLen > maxLen) {
                    maxLen = currLen;
                    start = l;
                }
                l--;
                r++;
            }
        };

        for (int i = 0; i < n; i++) {
            expand(i, i);     // Odd length palindromes
            expand(i, i + 1); // Even length palindromes
        }

        return s.substr(start, maxLen);
    }
};