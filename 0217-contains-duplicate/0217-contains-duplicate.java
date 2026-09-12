class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> arr =new HashSet<>();
        for(int i:nums){
            if(arr.contains(i)){
                return true;
            }
            arr.add(i);
        }
        return false;
    }
}