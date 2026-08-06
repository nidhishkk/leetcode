class Solution {
public:
    bool arequal(const vector<vector<int>>& arr1,const vector<vector<int>>& arr2){
        int n1=arr1.size(),n2=arr2.size();
        if(n1!=n2){
            return false;
        }
        int nr1=arr1[0].size(),nr2=arr2[0].size();
        if(nr1!=nr2){
            return false;
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<nr1;j++){
                if(arr1[i][j]!=arr2[i][j]){
                    return false;
                }
            }
        }return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int round=1;
        bool res=false;
        int n=mat.size(),m=mat[0].size();
        if(arequal(mat,target)){
            return true;
        }
        while(round<4){
            for(int i=0;i<n;i++){
                for(int j=i+1;j<m;j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<n;i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            if(arequal(mat,target)){
                return true;
            }
            round++;
        }return res;
    }
};