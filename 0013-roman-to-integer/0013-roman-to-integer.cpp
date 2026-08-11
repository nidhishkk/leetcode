class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> equi={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.size(),num=0;
        for(int i=0;i<n-1;i++){
            if(equi[s[i]]<equi[s[i+1]]){
                num-=equi[s[i]];
            }
            else{
                num+=equi[s[i]];
            }
        }
        num+=equi[s[n-1]];
        return num;
    }
};