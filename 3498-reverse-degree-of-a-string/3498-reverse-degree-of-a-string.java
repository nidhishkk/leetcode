class Solution {
    public int reverseDegree(String s) {
        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            int charVal = 26 - (s.charAt(i) - 'a');
            total += (i + 1) * charVal;
        }
        return total;
    }
}