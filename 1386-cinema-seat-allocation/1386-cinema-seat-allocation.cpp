class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> mp;

        for (auto seat : reservedSeats) {
            mp[seat[0]].insert(seat[1]);
        }

        int ans = (n - mp.size()) * 2;

        for (auto row : mp) {
            bool left = true;
            bool middle = true;
            bool right = true;

            for (int seat = 2; seat <= 5; seat++) {
                if (row.second.count(seat))
                    left = false;
            }

            for (int seat = 4; seat <= 7; seat++) {
                if (row.second.count(seat))
                    middle = false;
            }

            for (int seat = 6; seat <= 9; seat++) {
                if (row.second.count(seat))
                    right = false;
            }

            if (left && right)
                ans += 2;
            else if (left || middle || right)
                ans += 1;
        }

        return ans;
    }
};