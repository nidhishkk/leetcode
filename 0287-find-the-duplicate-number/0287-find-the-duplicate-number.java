class Solution {
    public int findDuplicate(int[] nums) {
        HashSet set=new HashSet<>();
        int i=0;
        int n=nums.length;
        while(i<n){
            if(set.contains(nums[i])){
                return nums[i];
            }
            set.add(nums[i]);
            i++;
        }
        return 0;
    }
}