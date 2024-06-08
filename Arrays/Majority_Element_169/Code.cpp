class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> temp;
        int arrSize = nums.size();

        int majorityElement;
        int majorityElementFreq;

        for (int i = 0; i < arrSize; i++)
        {
            temp[nums[i]] = temp[nums[i]] + 1;
        }

        int mapSize = temp.size();

        majorityElement = 0;
        majorityElementFreq = 0;

        for (auto it = temp.begin(); it != temp.end(); it++)
        {
            if (it->second > majorityElementFreq)
            {
                majorityElement = it->first;
                majorityElementFreq = it->second;
            }
        }
        return majorityElement;
    }
};