class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n,0);
        int sum = nums[0];
        for(int i=0;i<n;i++){
            arr[i]=sum;
            if(i<n-1)
                sum+=nums[i+1];
        }
        return arr;
    }
};