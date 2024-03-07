class Solution
{
public:
    int minLength(string s)
    {
        int size = s.size();
        stack<char> stk;
        stk.push(s[0]);

        char first, second;
        for (int i = 1; i < size; i++)
        {
            stk.push(s[i]);
            if (stk.size() < 2)
            {
                continue;
            }

            first = stk.top();
            stk.pop();
            second = stk.top();
            stk.pop();
            // cout << "POP: "<< second << first << endl;
            if (!((second == 'A' && first == 'B') || (second == 'C' && first == 'D')))
            {
                stk.push(second);
                stk.push(first);
                // cout <<  "PUSH:" << second << first << endl;
            }
        }

        return stk.size();
    }
};