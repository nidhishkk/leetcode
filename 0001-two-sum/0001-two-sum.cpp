class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> idx;
        for(int i=0;i<nums.size();i++){
            int required=target-nums[i];
            if(idx.find(required)!=idx.end()){
                return {i,idx[required]};
            }
            idx[nums[i]]=i;
        }
        return {};
    }
};