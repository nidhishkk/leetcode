
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size())
            return false;

        vector<int> a(26, 0), b(26, 0);

        for (char c : word1)
            a[c - 'a']++;

        for (char c : word2)
            b[c - 'a']++;

        for (int i = 0; i < 26; i++) {
            if ((a[i] == 0) != (b[i] == 0))
                return false;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }
};
