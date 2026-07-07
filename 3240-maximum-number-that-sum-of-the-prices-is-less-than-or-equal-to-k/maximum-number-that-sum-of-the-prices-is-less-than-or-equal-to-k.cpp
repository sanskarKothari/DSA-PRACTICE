class Solution {
public:

    long long countBits(long long n, int pos)
    {
        long long block = 1LL << pos;
        long long half  = 1LL << (pos - 1);

        long long full = (n + 1) / block;
        long long rem  = (n + 1) % block;

        return full * half +
               max(0LL, rem - half);
    }

    long long accumulatedPrice(long long n, int x)
    {
        long long total = 0;

        for(int pos = x; pos <= 60; pos += x)
        {
            total += countBits(n, pos);
        }

        return total;
    }

    long long findMaximumNumber(long long k, int x)
    {
        long long l = 1;
        long long r = 1e15;
        long long ans = 0;

        while(l <= r)
        {
            long long mid = l + (r - l) / 2;

            if(accumulatedPrice(mid, x) <= k)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        return ans;
    }
};