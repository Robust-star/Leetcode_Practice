class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        // string s1,s2;
        string s1 = bitset<32>(x).to_string();
        string s2 = bitset<32>(y).to_string();
        int count{};
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
                count++;
        }
        return count;
    }
};

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int n = x ^ y;
        int res = 0;
        while (n) //
        {
            res += n & 1;
            n >>= 1;
        }
        return res;
    }
};
