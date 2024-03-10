class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stk;

        int size = s.size();

        for(int i = 0; i < size; i++){
            if(s[i] == '('){
                stk.push(i);
            }
            else if(s[i] == ')'){
                if(!stk.empty() && s[stk.top()] == '('){
                    stk.pop();
                }
                else{
                    stk.push(i);
                }
            }
        }

        while(!stk.empty()){
            // cout << "Bracket To Remove: " << stk.top() << endl;
            s.erase(stk.top(), 1);
            stk.pop();
        }

        return s;
    }
};
