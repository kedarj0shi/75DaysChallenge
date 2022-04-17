class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(auto i: s){
            if(i=='(' || i=='[' || i=='{')
                st.push(i);
            else if(st.size() and i=='}' and st.top()=='{')
                st.pop();
            else if(st.size() and i==']' and st.top()=='[')
                st.pop();
            else if(st.size() and i==')' and st.top()=='(')
                st.pop();
            else
                return 0;
        }
        if(st.size()==0)
            return 1;
        return 0;
    }
};