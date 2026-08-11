class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> brack={{')','('},{'}','{'},{']','['}};
        stack<char> check;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                check.push(s[i]);
            }
            else{
                if(check.empty()){
                    check.push(s[i]);
                }
                if(check.top()==brack[s[i]]){
                    check.pop();
                }
                else{
                    check.push(s[i]);
                }
            }
        }
        return check.empty();
    }
};