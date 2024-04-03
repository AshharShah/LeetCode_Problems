class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> stk;
        stack<char> reverse;
        string result = "";
        int stringSize = s.size();

        for (int i = 0; i < stringSize; i++)
        {
            if (s[i] == '*')
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }

        if (stk.empty() == true)
        {
            return "";
        }

        while (stk.empty() == false)
        {
            reverse.push(stk.top());
            stk.pop();
        }

        while (reverse.empty() == false)
        {
            result += reverse.top();
            reverse.pop();
        }

        return result;
    }
};