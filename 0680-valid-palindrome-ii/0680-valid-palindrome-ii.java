class Solution {
    public boolean validPalindrome(String s) {
        int left=0;
        int right=s.length()-1;
        int diff=0;
        while(left<right){
            if(s.charAt(left)==s.charAt(right)){
                left++;
                right--;
            }
            else{
                return isvalid(s,left+1,right) || isvalid(s,left,right-1);
            }
        }
        return true;
    }
    private boolean isvalid(String s,int left,int right){
        while(left<right){
            if (Character.toLowerCase(s.charAt(left)) != Character.toLowerCase(s.charAt(right))) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}