
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> seen;

        for (int x : arr)
            freq[x]++;

        for (auto p : freq) {
            if (seen.count(p.second))
                return false;

            seen.insert(p.second);
        }

        return true;
    }
};
