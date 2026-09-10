class Solution {
    public int maxArea(int[] height) {
        int left=0;
        int right=height.length-1;
        int max_water=Integer.MIN_VALUE;
        while(left<right){
            int hei=Math.min(height[left],height[right]);
            int vol=hei*(right-left);
            max_water=Math.max(max_water,vol);
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