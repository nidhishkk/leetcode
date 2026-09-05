class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int mon=money-prices[0]-prices[1];
        if(mon<0){
            return money;
        }
        return mon;
    }
};