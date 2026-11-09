class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> val;
        for(int i=0;i<nums.size();i++){
            if(val.find(nums[i])!=val.end()){
                return true;
            }
            val.insert(nums[i]);
        }
        return false;
    }
};