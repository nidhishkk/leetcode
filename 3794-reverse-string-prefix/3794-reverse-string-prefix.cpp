class Solution {
public:
    string reversePrefix(string s, int k) {
        string res="";
        vector<char> temp(k);
        for(int i=0;i<k;i++){
            temp[k-i-1]=s[i];
        }
        for(char i:temp){
            res+=i;
        }
        for(int i=k;i<s.size();i++){
            res+=s[i];
        }return res;
    }
};