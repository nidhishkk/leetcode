class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int maxi=nums[0];
        for(int i:nums){
            if(i>maxi){
                maxi=i;
            }
        }
        for(int i:nums){
            sum+=maxi-i;
        }
        return sum;
    }
};