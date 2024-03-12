class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int peakFound = 0;
        int n = nums.size();
        int low = 0, high = n - 1, mid = 0;

        if (n == 1)
        {
            return 0;
        }

        if (n == 2)
        {
            if (nums[0] > nums[1])
            {
                return low;
            }
            else
            {
                return high;
            }
        }

        while (low < high)
        {
            mid = (low + high) / 2;
            if (mid == 0 || (high - low) == 1)
            {
                break;
            }
            // cout << low << " " << high << " " << mid << endl;
            if (nums[mid - 1] < nums[mid] && nums[mid + 1] < nums[mid])
            {
                return mid;
            }

            if (nums[mid] < nums[mid - 1])
            {
                high = mid;
            }
            else
            {
                low = mid;
            }
        }

        if (nums[0] > nums[1])
        {
            return low;
        }
        else
        {
            return high;
        }
    }
};