class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0],len=nums.size();
        for(int i=1;i<len;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }else{
                break;
            }
        }while(find(nums.begin(),nums.end(),sum)!=nums.end()){
            sum++;
        }
        return sum;
    }
};