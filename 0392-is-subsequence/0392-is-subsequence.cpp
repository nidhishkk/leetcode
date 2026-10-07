class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int ie=s.length();
        int je=t.length();
        while(i<ie && j<je){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i==ie;
    }
};