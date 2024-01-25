// https://leetcode.com/problems/intersection-of-two-arrays/


// 1. approach 1 : 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(auto i : nums1){
            if(count(nums2.begin(),nums2.end(),i)>0){ 
                if(count(result.begin(),result.end(),i)==0){ 
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};


// approach 2 OPTIMIZED 
// TC = O(nlog(nums2Size) + nlog(num1Size) + min(nums2.size, nums1.size) + min(nums2.size, nums1.size)) => O(nlogn+mlogm)
// sc = min(nums2.size, nums1.size)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;

        int p1=0;
        int p2=0;

        while(p1<nums1.size() && p2<nums2.size()){

            if(nums1[p1] > nums2[p2]){ 
                p2++;
            }else if(nums1[p1] < nums2[p2]){
                p1++;
            }else{ 
                res.push_back(nums1[p1]);
                p1++;
                p2++;
            }
        }
        
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};