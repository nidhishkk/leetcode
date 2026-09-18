class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m=matrix.length;
        int n=matrix[0].length;
        int row=0;
        int col=n-1;
        while(row<m && col<n && row>=0 && col>=0){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                row++;
            }
            else{
                col--;
            }
        }
        return false;
    }
}