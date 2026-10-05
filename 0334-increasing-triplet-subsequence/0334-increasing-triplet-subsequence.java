class Solution {
    public boolean increasingTriplet(int[] nums) {
        int first=Integer.MAX_VALUE;
        int second=Integer.MAX_VALUE;
        for(int curr:nums){
            if(curr<=first){
                first=curr;
            }
            else if(curr<=second){
                second=curr;
            }
            else{
                return true;
            }
        }
        return false;
    }
}