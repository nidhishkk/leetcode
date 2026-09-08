class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int n = arr.length;
        int total = 0;
        for (int i=0;i<n;i++){
            int total_subarrays = (i + 1) * (n - i);
            int odd_count = (total_subarrays + 1) / 2;
            total += odd_count * arr[i];
        }
        return total;
    }
}