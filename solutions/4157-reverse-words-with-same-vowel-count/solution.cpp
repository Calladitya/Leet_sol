class Solution {
public:
    int vovelcount(string Words){
        int count=0;
        for(char ch:Words){
          if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                count++;
            }
        }
        return count;
    }
    string reverseWords(string s) {
        stringstream ss(s);
        int count=0;
        vector<string>Words;
        string Word="";
        while(ss>>Word){
            Words.push_back(Word);
        }

       int firstVowel=vovelcount(Words[0]);

        for(int i=1;i<Words.size();i++){
            if(vovelcount(Words[i])==firstVowel){
                reverse(Words[i].begin(), Words[i].end());
            }
        }

        string result=Words[0];
        for(int i=1;i<Words.size();i++){
            result+=" "+Words[i];
        }
        return result;
    }
};
