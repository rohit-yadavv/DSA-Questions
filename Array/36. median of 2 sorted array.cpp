//? https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();

        int i = 0;
        int j = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while (i < n1) {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j < n2) {
            ans.push_back(nums2[j]);
            j++;
        }

        int n = ans.size();
        double res;
        if (n % 2) {
            res = ans[n / 2];
        } else {
            res = (ans[n / 2 - 1] + ans[n / 2]) / 2.0;  
        }
        return res;
    }
};
