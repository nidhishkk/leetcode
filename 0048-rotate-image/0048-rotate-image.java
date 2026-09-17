class Solution {
    public void rotate(int[][] matrix) {
        for(int i=0;i<matrix.length;i++){
            for(int j=i+1;j<matrix.length;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int[] mat : matrix){
            int i=0;
            int j=mat.length-1;
            while(i<j){
                int temp=mat[i];
                mat[i]=mat[j];
                mat[j]=temp;
                i++;
                j--;
            }
        }
    }
}