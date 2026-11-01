class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min=nums[0];
        int n=nums.size();
        for(int i:nums){
            if(i<=min){
                min=i;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i]-min;
        }
        return sum;
    }
};