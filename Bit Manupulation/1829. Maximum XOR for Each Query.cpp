class Solution
{
public:
    vector<int> getMaximumXor(vector<int> &nums, int maximumBit)
    {
        int x = 0;
        int n = nums.size();
        vector<int> ans(n);
        for (auto num : nums)
            x ^= num;
        ans[0] = x ^= (1 << maximumBit) - 1;
        for (int i = 1; i < n; i++)
        {
            ans[i] = x ^= nums[n - i];
        }
        return ans;
    }
};