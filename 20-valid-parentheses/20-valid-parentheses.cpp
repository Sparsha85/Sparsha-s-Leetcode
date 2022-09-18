class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int l = s.length();
        int empty = 0;
        for(int i = 0; i < l; i++){
            if(st.empty() && (s[i]==')' || s[i] == '}' || s[i] == ']'))
                empty++;
            
            else if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            
            else if (s[i] == ')' && st.top() == '(')
                st.pop();
            
            else if(s[i] == '}' && st.top() == '{' )
                st.pop();
            else if(s[i]==']' && st.top() == '[')
                st.pop();
            else
                st.push(s[i]);
        }
        
        if(st.empty() && empty == 0)
            return true;
        else 
            return false;
    }
};