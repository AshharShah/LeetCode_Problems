class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int arrSize = nums.size();

        int k = 0;
        int numZeros = 0;

        for (int i = 0; i < arrSize; i++)
        {
            if (nums[i] != 0)
            {
                nums[k] = nums[i];
                k++;
            }
            else
            {
                numZeros++;
            }
        }

        // replace ending with all zeros
        for (int i = arrSize - numZeros; i < arrSize; i++)
        {
            nums[i] = 0;
        }
    }
};