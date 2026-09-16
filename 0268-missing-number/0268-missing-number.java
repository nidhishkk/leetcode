class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int n=nums.length;
        int i=0;
        while(i<n){
            if(nums[i]!=i){
                return i;
            }
            i++;
        }return n;
    }
}