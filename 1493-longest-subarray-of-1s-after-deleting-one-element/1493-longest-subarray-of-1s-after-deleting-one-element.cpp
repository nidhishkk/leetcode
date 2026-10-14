class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, zeros = 0, ans = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0)
                zeros++;

            while (zeros > 1) {
                if (nums[left] == 0)
                    zeros--;
                left++;
            }

            ans = max(ans, right - left);
        }

        return ans;
    }
};