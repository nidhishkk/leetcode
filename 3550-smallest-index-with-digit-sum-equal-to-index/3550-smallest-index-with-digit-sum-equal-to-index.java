class Solution {
    int ds(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    public int smallestIndex(int[] nums) {
        int ans=-1;
        int idx=0;
        for(int num:nums){
            if(ds(num)==idx){
                ans=idx;
                break;
            }
            idx++;
        }return ans;
    }
}