class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &a, int k)
    {
        int n = a.size();
        int m = a[0].size();
        multimap<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int one = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                    one++;
            }
            mp.insert(pair<int, int>(one, i));
        }
        vector<int> v;
        for (auto itr = mp.begin(); itr != mp.end(); itr++)
        {
            v.push_back(itr->second);
        }
        v.resize(k);
        return v;
    }
};