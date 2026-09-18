class Solution {
    public static void rev(int[] nums,int left,int right){
        while(left<right){
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
    }
    public void nextPermutation(int[] nums) {
        int n=nums.length;
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            rev(nums,0,n-1);
        }
        else{
            int s=-1;
            for(int j=n-1;j>=idx+1;j--){
                if(nums[j]>nums[idx]){
                    s=j;
                    break;
                }
            }
            int temp=nums[s];
            nums[s]=nums[idx];
            nums[idx]=temp;
            rev(nums,idx+1,n-1);
        }
    }
}