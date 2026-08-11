class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size(),idx=0;
        string res,start=strs[0],end=strs[n-1];
        while(idx<start.size() && idx<end.size() && start[idx]==end[idx]){
            res+=start[idx];
            idx++;
        }
        return res;
    }
};