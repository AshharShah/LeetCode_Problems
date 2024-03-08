class Solution
{
public:
    int findLUSlength(string a, string b)
    {
        int aLen = a.size();
        int bLen = b.size();

        if (a.substr(0, aLen) == b.substr(0, bLen))
        {
            return -1;
        }

        if (aLen <= bLen)
        {
            if (a.substr(0, aLen) != b.substr(0, aLen))
            {
                return bLen;
            }
        }
        else
        {
            if (a.substr(0, bLen) != b.substr(0, bLen))
            {
                return aLen;
            }
        }

        return max(aLen, bLen);
    }
};