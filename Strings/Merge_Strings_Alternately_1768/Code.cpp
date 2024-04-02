class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        char newString[500];
        int word1Size = word1.size();
        int word2Size = word2.size();

        int i = 0;
        int k1 = 0;
        int k2 = 0;

        while (k1 < word1Size && k2 < word2Size)
        {
            if (i % 2 == 0)
            {
                newString[i] = word1[k1];
                k1++;
            }
            else
            {
                newString[i] = word2[k2];
                k2++;
            }
            i++;
        }

        while (k2 < word2Size)
        {
            newString[i] = word2[k2];
            k2++;
            i++;
        }

        while (k1 < word1Size)
        {
            newString[i] = word1[k1];
            k1++;
            i++;
        }

        return (string)newString;
    }
};