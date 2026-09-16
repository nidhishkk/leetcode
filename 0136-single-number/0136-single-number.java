class Solution {
    public int singleNumber(int[] nums) {
        int i=1;
        int n=nums.length;
        int unique=nums[0];
        while(i<n){
            unique^=nums[i];
            i++;
        }
        return unique;
    }
}