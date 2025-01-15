class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> mp(26, 0);
            for (int j = i; j < s.size(); j++) {
                mp[s[j] - 'a']++;

                int mx = INT_MIN;
                int mn = INT_MAX;

                for (auto it : mp) {
                    if (it > 0) {
                        mx = max(it, mx);
                        mn = min(it, mn);
                    }
                }
                sum += mx - mn;
            }
        }
        return sum;
    }
};
