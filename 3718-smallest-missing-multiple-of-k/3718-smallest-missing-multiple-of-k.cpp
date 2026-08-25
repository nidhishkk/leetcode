class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(),nums.end());
        int mul=k;
        while(s.count(mul)){
            mul+=k;
        }
        return mul;
    }
};