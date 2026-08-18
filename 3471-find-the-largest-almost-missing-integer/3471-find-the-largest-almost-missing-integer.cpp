class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for (int i = 0; i <= n - k; i++) {
            unordered_set<int> seen;
            for (int j = i; j < i + k; j++) {
                seen.insert(nums[j]);
            }
            for (int x : seen) {
                freq[x]++;
            }
        }
        int res = -1;
        for (auto [x, count] : freq) {
            if (count == 1) {
                res = max(res, x);
            }
        }
        return res;
    }
};