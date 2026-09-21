class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int m=matrix.length;
        int n=matrix[0].length;
        int top=0;
        int bottom=m-1;
        int left=0;
        int right=n-1;
        List<Integer> arr=new ArrayList<>();
        if(m==0 && n==0){
            return arr;
        }
        while(top<=bottom && left<=right){
            for(int col=left;col<=right;col++){
                arr.add(matrix[top][col]);
            }
            top++;
            for(int row=top;row<=bottom;row++){
                arr.add(matrix[row][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    arr.add(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    arr.add(matrix[i][left]);
                }
                left++;
            }
        }
        return arr;
    }
}