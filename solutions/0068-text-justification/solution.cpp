class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        string result;
        vector<string> result2;

        int count = 0;
        int space;

        for(int i = 0; i < words.size(); i++) {

            if(result.empty()) {
                result += words[i];
            }

            else if(result.size() + 1 + words[i].size() <= maxWidth) {
                result += " " + words[i];
                count++;
            }

            else {

                space = maxWidth - result.size();

                // Multiple words in the line
                if(count > 0) {

                    int eachSpace = space / count;
                    int extraSpace = space % count;

                    for(int j = 0; j < result.size(); j++) {

                        if(result[j] == ' ') {

                            result.insert(j + 1, eachSpace, ' ');
                            j += eachSpace;

                            if(extraSpace > 0) {
                                result.insert(j + 1, 1, ' ');
                                j++;
                                extraSpace--;
                            }
                        }
                    }
                }
                else {

                    while(result.size() < maxWidth) {
                        result.push_back(' ');
                    }
                }

                result2.push_back(result);

                result.clear();
                count = 0;
                i--;
            }
        }
        if(!result.empty()) {

            while(result.size() < maxWidth) {
                result.push_back(' ');
            }

            result2.push_back(result);
        }

        return result2;
    }
};
