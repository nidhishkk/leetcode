class Solution {
    private boolean ispali(String s){
        int left=0;
        int right=s.length()-1;
        while(left<right){
            if(Character.toLowerCase(s.charAt(left))!=Character.toLowerCase(s.charAt(right))){
                return false;
            }left++;right--;
        }return true;
    }
    public String firstPalindrome(String[] words) {
        for(String s: words){
            if(ispali(s)){
                return s;
            }
        }
        return "";
    }
}