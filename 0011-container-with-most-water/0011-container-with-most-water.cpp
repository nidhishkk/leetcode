class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int max_vol=0;
        while(j>i){
            int area=min({height[i],height[j]})*(j-i);
            max_vol=max({area,max_vol});
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return max_vol;
    }
};