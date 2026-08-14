class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> freq(256, 0);

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right]]++;

            while (freq[s[right]] > 2) {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};