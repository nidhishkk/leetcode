class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        res[0]=1;
        for(int i=1;i<n;i++){
            res[i]=res[i-1]*nums[i-1];
        }
        int prod=1;
        for(int j=n-1;j>=0;j--){
            res[j]*=prod;
            prod*=nums[j];
        }
        return res;
    }
};