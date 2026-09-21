class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int p1=m-1;
        int p2=n-1;
        int f=m+n-1;
        while(p1>=0 && p2>=0){
            if(nums1[p1] > nums2[p2]){
                nums1[f]=nums1[p1];
                p1--;
                f--;
            }
            else{
                nums1[f]=nums2[p2];
                f--;
                p2--;
            }
        }
        while(p2>=0){
            nums1[f]=nums2[p2];
            f--;
            p2--;
        }
    }
}