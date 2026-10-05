class Solution {
    public String mergeAlternately(String word1, String word2) {
        int i=0;
        int j=0;
        String res="";
        int ei=word1.length();
        int ej=word2.length();
        while(i<ei & j<ej){
            res+=word1.charAt(i);
            res+=word2.charAt(j);
            i++;
            j++;
        }
        if(i<ei){
            while(i<ei){
                res+=word1.charAt(i);
                i++;
            }
        }
        if(j<ej){
            while(j<ej){
                res+=word2.charAt(j);
                j++;
            }
        }
        return res;
    }
}