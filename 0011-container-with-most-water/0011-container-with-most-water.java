class Solution {
    public int maxArea(int[] height) {
        int left=0;
        int right=height.length-1;
        int max_water=0;
        while(left<right){
            max_water=Math.max(max_water,Math.min(height[left],height[right])*(right-left));
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_water;
    }
}