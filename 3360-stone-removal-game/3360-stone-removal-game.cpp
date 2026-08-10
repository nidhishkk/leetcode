class Solution {
public:
    bool canAliceWin(int n) {
        int turn = 1;
        int remove = 10;
        while (n >= remove) {
            n -= remove;
            remove--;
            turn++;
        }
        return turn % 2 == 0;
    }
};