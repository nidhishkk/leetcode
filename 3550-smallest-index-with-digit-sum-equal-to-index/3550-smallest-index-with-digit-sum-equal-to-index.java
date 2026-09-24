class Solution {
    public int smallestIndex(int[] nums) {
        for(int i=0;i<nums.length;i++){
            int sum=0;
            int x=nums[i];
            while(x>0){
                sum+=x%10;
                x/=10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
}