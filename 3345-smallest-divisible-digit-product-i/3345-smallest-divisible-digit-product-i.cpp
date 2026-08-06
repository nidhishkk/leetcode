class Solution {
public:
    bool isd(int num,int div){
        int sum=1;
        while(num>0){
            sum*=num%10;
            num/=10;
        }
        return sum%div==0;
    }
    int smallestNumber(int n, int t) {
        int first=n;
        while(!isd(first,t)){
            first++;
        }return first;
    }
};