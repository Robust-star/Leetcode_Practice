class Solution
{
public:
    int mySqrt(int x)
    {
        int low = 1, high = x;
        int res;
        while (low <= high)
        {
            long mid = low + (high - low) / 2;
            long k = mid * mid;
            if (k == x)
                return mid;
            else if (k < x)
            {
                res = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1; ////asdag
            }
        }
        return res;
    }
};