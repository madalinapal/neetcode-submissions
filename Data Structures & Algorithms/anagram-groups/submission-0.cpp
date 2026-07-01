class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> result;
        for(auto s : strs){
            vector<int> count(26,0);
            for(auto c : s){
                count[c - 'a'] ++;
            }
            result[count].push_back(s);
        }
        vector<vector<string>> solution;
        solution.reserve(result.size()); 
        
        for (auto& [cheie, grup_anagrame] : result) {
            solution.push_back(move(grup_anagrame)); 
        }
        
        return solution;
    }
};
