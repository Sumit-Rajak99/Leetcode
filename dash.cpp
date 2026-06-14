#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "5F3Z-2e-9-w"; // input string
    int k = 4;                // group size
    
    string temp = "";
    
    // 1. Remove dashes and convert to uppercase
    for (char c : s) {
        if (c != '-') {
            temp += toupper(c);
        }
    }
    
    // 2. Build result from the end
    string result = "";
    int count = 0;
    
    for (int i = temp.size() - 1; i >= 0; i--) {
        result.push_back(temp[i]);
        count++;
        
        if (count == k && i != 0) {
            result.push_back('-');
            count = 0;
        }
    }
    
    // 3. Reverse the result string
    reverse(result.begin(), result.end());
    
    // 4. Print final output
    cout << result << endl;
    
    return 0;
}
