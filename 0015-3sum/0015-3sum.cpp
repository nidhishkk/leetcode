class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> res;
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                vector<int> arr;
                if(sum==0){
                    arr.push_back(nums[i]);
                    arr.push_back(nums[left]);
                    arr.push_back(nums[right]);
                    res.push_back(arr);
                    right--;
                    left++;
                    while (left < right && nums[left] == nums[left-1]){
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]){
                        right--;
                    }
                }
                else if(sum<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }return res;
    }
};