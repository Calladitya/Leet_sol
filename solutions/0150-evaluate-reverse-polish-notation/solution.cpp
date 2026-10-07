class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        int a = 0;
        int b = 0;
        int result = 0;

        for(int i = 0; i < tokens.size(); i++) {

            if(tokens[i] == "+" || tokens[i] == "-" ||
               tokens[i] == "*" || tokens[i] == "/") {

                b = st.top();
                st.pop();

                a = st.top();
                st.pop();

                if(tokens[i] == "+") {
                    result = a + b;
                }

                else if(tokens[i] == "-") {
                    result = a - b;
                }

                else if(tokens[i] == "*") {
                    result = a * b;
                }

                else if(tokens[i] == "/") {
                    result = a / b;
                }

                st.push(result);
            }

            else {
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();
    }
};
