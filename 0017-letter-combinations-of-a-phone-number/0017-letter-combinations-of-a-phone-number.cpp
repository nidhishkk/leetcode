class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        vector<string> mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;
        string curr = "";

        function<void(int)> solve = [&](int i) {
            if(i == digits.size()) {
                ans.push_back(curr);
                return;
            }

            string letters = mp[digits[i] - '0'];

            for(char c : letters) {
                curr.push_back(c);
                solve(i + 1);
                curr.pop_back();
            }
        };

        solve(0);
        return ans;
    }
};