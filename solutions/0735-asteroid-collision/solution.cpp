class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids){
        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
            int current = asteroids[i];
            while(!st.empty() && current < 0 && st.top()>0 ){
                if(abs(current) > st.top()){
                    st.pop();
                }
                else if(abs(current) == st.top()){
                    st.pop();
                    current = 0;
                    break;
                }
                else{
                    current = 0;
                    break;
                }
            }
            if(current != 0){
                st.push(current);
            }
        }
             vector<int> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
