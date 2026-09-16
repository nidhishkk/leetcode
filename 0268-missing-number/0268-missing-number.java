class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int exp=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=exp){
                return exp;
            }exp++;
        }
        return exp;
    }
}