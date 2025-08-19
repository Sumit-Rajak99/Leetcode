#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> result(n);
        
        // Store score with original index
        vector<pair<int,int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({score[i], i});
        }

        // Sort by score in descending order
        sort(arr.begin(), arr.end(), greater<pair<int,int>>());

        // Assign ranks
        for (int i = 0; i < n; i++) {
            if (i == 0) result[arr[i].second] = "Gold Medal";
            else if (i == 1) result[arr[i].second] = "Silver Medal";
            else if (i == 2) result[arr[i].second] = "Bronze Medal";
            else result[arr[i].second] = to_string(i + 1);
        }

        return result;
    }
};
