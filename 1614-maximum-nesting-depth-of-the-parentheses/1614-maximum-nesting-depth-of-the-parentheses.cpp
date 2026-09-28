class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int ans=0;
        for(char c:s){
            if(c=='('){
                depth++;
                ans=max(ans,depth);
            }
            if(c==')'){
                depth--;
            }
        }
        return ans;
    }
};