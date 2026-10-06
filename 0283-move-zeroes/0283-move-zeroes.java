class Solution {
    public void moveZeroes(int[] nums) {
        int ins=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
                int temp=nums[ins];
                nums[ins]=nums[i];
                nums[i]=temp;
                ins++;
            }
        }
    }
}