class Solution {
public:
    vector<int> range(int start,int end){
        vector<int> res(end-start+1);
        int idx=0;
        for(int i=start;i<end+1;i++){
            res[idx++]=i;
        }return res;
    }
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        int expected=*min_element(nums.begin(),nums.end());
        for(int i:nums){
            if(i==expected){
                expected+=1;
                continue;
            }
            else if(i>expected){
                while(expected<i){
                    res.push_back(expected);
                    expected++;
                }
                expected++;         
            }
        }return res;
    }
};