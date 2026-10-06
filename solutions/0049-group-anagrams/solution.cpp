class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     map<map<char,int>, vector<string>> mpp;
     /*
     KEY                          VALUE
{a:1,e:1,t:1}       →        ["eat","tea","ate"]
{a:1,n:1,t:1}       →        ["tan","nat"]
{a:1,b:1,t:1}       →        ["bat"]
     iss liye ye walla map use kiya h 
     */
       for(string ch : strs) {
        map<char,int> freq;
         for(char ch1 : ch) {
           freq[ch1]++;
          }
          mpp[freq].push_back(ch);
       }
       vector<vector<string>> result;
        for(auto it : mpp) {
            result.push_back(it.second);
        }
        return result;
   }
};
