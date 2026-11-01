class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start =0;
        int second=0;
        while(second < nums.size()){
            if(nums[second]!=0){
                if(start!=second){
                    nums[start]=nums[second];
                    nums[second]=0;
                }
            start++;
            }
        second++;
        }
    }
};