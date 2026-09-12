class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set=new HashSet<>();
        for(int i:nums){
            set.add(i);
        }
        int longest=0;
        for(int i:set){
            int length=1;
            int curr=i;
            if(!set.contains(i-1)){
                while(set.contains(curr+1)){
                    length++;
                    curr++;
                }
                longest=Math.max(longest,length);
            }
        }return longest;
    }
}