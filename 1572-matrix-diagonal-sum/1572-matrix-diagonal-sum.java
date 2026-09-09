class Solution {
    public int diagonalSum(int[][] mat) {
        int i=0,j;
        int sum=0;
        int len=mat.length;
        while(i<len){
            sum+=mat[i][i];
            sum+=mat[i][len-i-1];
            i++;
        }
        if(len%2!=0){
            return sum-mat[len/2][len/2];
        }
        return sum;
    }
}