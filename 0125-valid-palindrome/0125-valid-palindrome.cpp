class Solution {
public:
    bool isPalindrome(string s) {
        string tocheck="";
        if(s==""){
            return true;
        }
        for(char i:s){
            if(isalnum(i)){
                tocheck+=tolower(i);
            }
        }
        int start=0,end=tocheck.size()-1;
        while(start<end){
            if(tocheck[start]!=tocheck[end]){
                return false;
            }start++;
            end--;
        }
        return true;
    }
};