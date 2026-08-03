class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        for(char i:columnTitle){
            result=result*26+(i-'A'+1);
        }return result;
    }
};