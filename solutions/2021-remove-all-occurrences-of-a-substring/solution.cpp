class Solution {
public:
    string removeOccurrences(string s, string part) {
      if(s.find(part)==string::npos){
        return s;
      }
      s.erase(s.find(part),part.length());
      return removeOccurrences(s,part);
    }
};
