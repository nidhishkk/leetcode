class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<j){
            int mid=i+(j-i)/2;
            if(nums[mid]<target){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        if(nums[i]<target){
            return i+1;
        }return i;
    }
};