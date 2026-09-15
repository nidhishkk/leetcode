class Solution {
    public int trap(int[] height) {
        int left=0;
        int len=height.length;
        if(len==0){
            return 0;
        }
        int right=len-1;
        int leftmax=height[0];
        int rightmax=height[len-1];
        int water=0;
        while(left<right){
            if(height[left]<=height[right]){
                if(height[left]<leftmax){
                    water+=leftmax-height[left];
                    left++;
                }
                else{
                    leftmax=height[left];
                    left++;
                }
            }
            else{
                if(height[right]<rightmax){
                    water+=rightmax-height[right];
                    right--;
                }
                else{
                    rightmax=height[right];
                    right--;
                }
            }
        }return water;
    }
}