class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s(nums1.begin(), nums1.end());
        vector<int> v;
        for (auto i : nums2)
        {
            for (auto j : s)
                if (s.find(i) != s.end())
                {
                    v.push_back(i);
                    s.erase(i);
                }
        }
        return v;
    }
};