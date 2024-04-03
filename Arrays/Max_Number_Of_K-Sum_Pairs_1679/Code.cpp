class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        map<int, int> freqs;
        int arrSize = nums.size();

        // store the frequencies of the elements at corresponding indexes
        for (int i = 0; i < arrSize; i++)
        {
            freqs[nums[i]] = freqs[nums[i]] + 1;
        }

        int numPairs = 0;

        for (int i = 0; i < arrSize; i++)
        {
            int rem = k - nums[i];
            freqs[nums[i]] = freqs[nums[i]] - 1;
            if (freqs.find(rem) == freqs.end() || freqs[rem] <= 0 || freqs[nums[i]] < 0)
            {
                freqs[nums[i]] = freqs[nums[i]] + 1;
                continue;
            }
            numPairs++;
            freqs[rem] = freqs[rem] - 1;
        }

        return numPairs;
    }
};