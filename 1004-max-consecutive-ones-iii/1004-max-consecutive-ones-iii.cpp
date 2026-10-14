
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, zeros = 0, ans = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0)
                zeros++;

            while (zeros > k) {
                if (nums[left] == 0)
                    zeros--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
