class Solution {
public:
    bool isvow(char s){
        s=tolower(s);
        tolower(s);
        return s=='a'||s=='e'||s=='i'||s=='o'||s=='u';
    }
    string reverseVowels(string s) {
        int start=0,end=s.size()-1;
        while(start<end){
            while(start<end && !isvow(s[start])){
                start++;
            }
            while(start<end && !isvow(s[end])){
                end--;
            }
            if(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }return s;
    }
};