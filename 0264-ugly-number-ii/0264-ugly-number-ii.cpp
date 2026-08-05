class Solution {
public:
    int nthUglyNumber(int n) {
        vector<long long> ugly(n);
        ugly[0] = 1;
        int i2 = 0, i3 = 0, i5 = 0;
        for (int i = 0; i < n; i++) {
            long long next = min({ugly[i2] * 2, ugly[i3] * 3, ugly[i5] * 5});
            ugly[i] = next;
            if (ugly[i2] * 2 == next) {
                i2++;
            }
            if (ugly[i3] * 3 == next) {
                i3++;
            }
            if (ugly[i5] * 5 == next) {
                i5++;
            }
        }return ugly[n-1]/2;
    }
};