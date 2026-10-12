class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};
        int count = 0;

        for (char c : s)
            freq[c]++;

        for (int i = 0; i < 128; i++) {
            count += (freq[i] / 2) * 2;
        }

        if (count < s.length())
            count++;

        return count;
    }
};