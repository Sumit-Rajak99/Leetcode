  #include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasPairWithSum(vector<int>& arr, int target) {
        int i = 0, j = arr.size() - 1;
        while (i < j) {
            int sum = arr[i] + arr[j];
            if (sum == target) return true;
            else if (sum < target) i++;
            else j--;
        }
        return false;
    }
}; // ✅ class खत्म होने के बाद semicolon ज़रूरी है

int main() {
    vector<int> arr = {1, 2, 4, 7, 11, 15};
    int target = 15;

    Solution sol;
    if (sol.hasPairWithSum(arr, target))
        cout << "Pair Found!" << endl;
    else
        cout << "No Pair Found!" << endl;

    return 0;
}
