class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sourceSum = 0;
        long long targetSum = 0;

        if(source.size() != target.size()){
            return false;
        }

        for (int i = 0; i < source.size(); i++) {
            sourceSum += source[i];
        }

        for (int i = 0; i < target.size(); i++) {
            targetSum += target[i];
        }
        if(sourceSum == targetSum){
            return true;
        }

        return false;
    }
};
