class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid = nums[nums.size()/2];
        int count = 0;

        for(int x : nums) {
            if(x == mid)
                count++;
                if(count>1){
                    return false;
                }
        }

        return true;
    }
};