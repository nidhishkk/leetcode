class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> res;
        unordered_set<int> set1,set2,set3,all;
        for(int i:nums1){
            set1.insert(i);
            all.insert(i);
        }
        for(int i:nums2){
            set2.insert(i);
            all.insert(i);
        }
        for(int i:nums3){
            set3.insert(i);
            all.insert(i);
        }

        for(int i:all){
            if(set1.count(i)+set2.count(i)+set3.count(i)>=2){
                res.push_back(i);
            }
        }return res;
    }
};