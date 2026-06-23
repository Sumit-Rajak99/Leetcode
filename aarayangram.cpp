#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for (int i = 1; i < words.size(); ) {
            string a = words[i - 1];
            string b = words[i];
            
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());

            if (a == b) {
                // अगर anagram हैं तो current word हटाओ
                words.erase(words.begin() + i);
            } else {
                i++; // वरना अगले pair पर जाओ
            }
        }
        return words; // final list लौटाओ
    }
};

int main() {
    Solution s;
    vector<string> words = {"abba", "baba", "bbaa", "cd", "dc"};
    vector<string> ans = s.removeAnagrams(words);

    for (auto &w : ans)
        cout << w << " ";
}
