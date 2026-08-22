class Solution {
public:
    bool checkDivisibility(int n) {
        int prod=1,sum=0;
        int temp=n;
        while(temp>0){
            int digit=temp%10;
            prod*=digit;
            sum+=digit;
            temp/=10;
        }
        return n%(prod+sum)==0;
    }
};