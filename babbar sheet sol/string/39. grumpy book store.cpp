
//? https://leetcode.com/problems/grumpy-bookstore-owner/description/

class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        int sum = 0, mx = 0, unsat = 0;
        for (int i = 0; i < customers.size(); i++)
        {
            sum += customers[i];
            customers[i] *= grumpy[i];
            unsat += customers[i];
        }
        for (int i = 0; i <= customers.size() - minutes; i++)
        {
            int k = minutes, count = 0, j = i;
            while (k--)
                count += customers[j++];
            if (count > mx)
                mx = count;
        }
        return sum - unsat + mx;
    }
};