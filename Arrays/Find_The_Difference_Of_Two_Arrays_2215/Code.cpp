class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, int> m1;
        map<int, int> m2;
        int num1Size = nums1.size();
        int num2Size = nums2.size();
        vector<vector<int>> result;
        vector<int> v1;
        vector<int> v2;

        for (int i = 0; i < num1Size; i++)
        {
            m1[nums1[i]] = 1;
        }

        for (int i = 0; i < num2Size; i++)
        {
            m2[nums2[i]] = 1;
        }

        for (int i = 0; i < num1Size; i++)
        {
            if (m2[nums1[i]] != 1)
            {
                m2[nums1[i]] = 1; // to remove recurrent numbers
                v1.push_back(nums1[i]);
            }
        }
        for (int i = 0; i < num2Size; i++)
        {
            if (m1[nums2[i]] != 1)
            {
                m1[nums2[i]] = 1; // to remove recurrent numbers
                v2.push_back(nums2[i]);
            }
        }

        result.push_back(v1);
        result.push_back(v2);

        return result;
    }
};