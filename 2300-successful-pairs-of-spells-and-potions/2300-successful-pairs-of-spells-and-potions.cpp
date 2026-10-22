class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> ans;

        for (int spell : spells) {
            long long required = (success + spell - 1) / spell;

            int index = lower_bound(potions.begin(), potions.end(), required) - potions.begin();

            ans.push_back(potions.size() - index);
        }

        return ans;
    }
};