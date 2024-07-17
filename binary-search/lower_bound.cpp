#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int lower_bond(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size();
        int ans = nums.size();

        while (low <= high)
        {
            int mid = (low + high) / 2;

            while (low <= high)
            {
                if (nums[mid] >= target)
                {
                    ans = mid;
                    high = mid - 1;
                }

                else
                {
                    low = mid + 1;
                }
            }
        }
    }
};