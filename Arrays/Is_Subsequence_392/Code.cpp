class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int sizeS = s.size() - 1;
        int sizeT = t.size() - 1;

        int p1 = 0, p2 = 0;
        int match = 0;

        // edge case
        if (sizeS == -1)
        {
            return true;
        }

        while (p1 <= sizeS && p2 <= sizeT)
        {
            cout << s[p1] << " " << t[p2] << endl;
            if (s[p1] == t[p2])
            {
                match = 1;
                p1++;
                p2++;
            }
            else
            {
                p2++;
            }
        }

        if (p1 == sizeS + 1 && match == 1)
        {
            return true;
        }
        return false;
    }
};