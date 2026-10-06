class Solution {
    public int jump(int[] nums) {
        int res=0;
        int step=0;
        int prev=0;
        for(int i=0;i<nums.length-1;i++){
            res=Math.max(res,i+nums[i]);
            if(i==prev){
                step+=1;
                prev=res;
            }
        }           
        return step;
    }
}