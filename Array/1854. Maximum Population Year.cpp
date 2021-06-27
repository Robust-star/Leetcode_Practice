// brute force solution

class Solution
{
public:
    int maximumPopulation(vector<vector<int>> &logs)
    {
        int n = logs.size();
        map<int, int> mp;
        int max = 0;
        int ans;
        if (n == 1)
            return logs[0][0];
        for (auto i : logs)
        {
            for (int j = i[0]; j < i[1]; j++)
                mp[j - 1950]++;
        }
        for (auto i : mp)
        {
            if (max < i.second)
            {
                max = i.second;
                ans = i.first;
            }
        }
        return ans + 1950;
    }
};

// Line swipe algorithm
