class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd = INT_MAX;
        for (int x : nums1) {
            if (x % 2 == 1) {
                minOdd = min(minOdd, x);
            }
        }
        for (int x : nums1) {
            if (x % 2 == 0 && minOdd != INT_MAX && x < minOdd) {
                return false;
            }
        }

        return true;
    }
};