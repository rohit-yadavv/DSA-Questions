class Solution {
 public:
  int floorSqrt(int n) {
    int low = 0;
    int high = n;
    int ans = -1;

    while (low <= high) {
      int mid = (low + high) / 2;

      if (mid * mid == n) {
        return mid;
      }

      if (mid * mid < n) {
        low = mid + 1;
        ans = mid;
      } else {
        high = mid - 1;
      }
    }
    return ans;
  }
};