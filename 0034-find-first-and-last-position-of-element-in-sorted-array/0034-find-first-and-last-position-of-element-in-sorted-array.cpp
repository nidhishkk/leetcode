class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left1 = 0, right1 = nums.size() - 1;
        int first = -1, last = -1;
        vector<int> res;
        while (left1 <= right1) {
            int mid = left1 + (right1 - left1) / 2;

            if (nums[mid] == target) {
                last = mid;
                left1 = mid + 1;
            } else if (nums[mid] < target) {
                left1 = mid + 1;
            } else {
                right1 = mid - 1;
            }
        }
        int left2 = 0, right2 = nums.size() - 1;

        while (left2 <= right2) {
            int mid = left2 + (right2 - left2) / 2;

            if (nums[mid] == target) {
                first = mid;
                right2 = mid - 1;
            } else if (nums[mid] < target) {
                left2 = mid + 1;
            } else {
                right2 = mid - 1;
            }
        }
        res.push_back(first);
        res.push_back(last);
        return res;
    }
};