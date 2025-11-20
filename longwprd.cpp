class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());   // lexicographical sort
        
        unordered_set<string> builtWords;
        string answer = "";
        
        for (string &w : words) {
            if (w.length() == 1 || builtWords.count(w.substr(0, w.length() - 1))) {

                builtWords.insert(w);

                if (w.length() > answer.length())
                    answer = w;
            }
        }
        
        return answer;
    }
};
