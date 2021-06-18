class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int ans{};
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            vector<int> &arr = grid[i];
            int lo = 0;
            int hi = m - 1;
            while (lo < hi)
            {
                int mid = lo + (hi - lo) / 2;
                if (arr[mid] < 0)
                {
                    hi = mid;
                }
                else
                {
                    lo = mid + 1;
                }
            }
            if (arr[lo] < 0)
            {
                ans += m - lo;
            }
        }
        return ans;
    }
};