class Solution {
    public int findDuplicate(int[] nums) {
        int n=nums.length;
        int i=0;
        boolean[] arr=new boolean[n+1];
        while(i<n){
            if(arr[nums[i]]){
                return nums[i];
            }
            arr[nums[i]]=true;
            i++;
        }
        return -1;
    }
}