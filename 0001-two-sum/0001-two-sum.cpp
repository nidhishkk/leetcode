class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> idx;
        int n=nums.size();
        for(int i=0;i<n;i++){
            idx.push_back({nums[i],i});
        }
        sort(idx.begin(),idx.end());
        int start=0;
        int end=n-1;
        while(start<end){
            if(idx[start].first+idx[end].first==target){
                return {idx[start].second,idx[end].second};
            }
            else if(idx[start].first+idx[end].first<target){
                start++;
            }
            else{
                end--;
            }
        }
        return {};
    }
};