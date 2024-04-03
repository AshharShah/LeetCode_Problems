#include <limits.h>
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double maxAvg = INT_MIN;
        double arrSize = nums.size();
        double sum, avg;

        sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum = sum + nums[j];
        }
        maxAvg = sum / k;

        for (int i = 1; i <= arrSize - k; i++)
        {
            sum = sum + nums[i + k - 1] - nums[i - 1];
            avg = sum / k;
            maxAvg = max(avg, maxAvg);
        }

        return maxAvg;
    }
};