class Solution {
    public int mySqrt(int x) {
        if(x == 0) // To avoid division by 0
            return 0;
        int start = 1, end = x / 2 + 1; // The squareroot can only lie in this range
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(mid == x / mid) // Not multiplying as the product for a large number may be greater than the max value of int
                return mid;
            else if(mid < x / mid) 
                start = mid + 1;
            else
                end = mid - 1;
        }
        return end; // end will be the largest integer such that end^2 < x
    }
}