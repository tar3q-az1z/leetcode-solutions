class Solution {
public:
    bool isValid(string s) {
        int top = 0;
        char *stk = new char[s.length() + 1];
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk[top] = s[i];
                ++top;
            }
            else{
                if(top == 0){
                    return false;
                } 
                else if(s[i] == ')'){
                    if(stk[top-1] != '('){
                        return false;
                    }
                    else{
                        --top;
                    }
                }
                else if(s[i] == '}'){
                    if(stk[top-1] != '{'){
                        return false;
                    }
                    else{
                        --top;
                    }
                }
                else if(s[i] == ']'){
                    if(stk[top-1] != '['){
                        return false;
                    }
                    else{
                        --top;
                    }
                }
                //else{
                //   --top;
                //}
            }
        }
        if(top == 0){
            return true;
        }
        else return false;
    }
};