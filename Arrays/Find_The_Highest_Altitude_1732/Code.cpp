class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int gainSize = gain.size();
        vector<int> altitudes(gainSize + 1, 0);

        for (int i = 0; i < gainSize; i++)
        {
            altitudes[i + 1] = altitudes[i] + gain[i];
        }

        int maxAlt = altitudes[0];

        for (int i = 1; i < gainSize + 1; i++)
        {
            cout << altitudes[i] << endl;
            if (maxAlt < altitudes[i])
            {
                maxAlt = altitudes[i];
            }
        }

        return maxAlt;
    }
};