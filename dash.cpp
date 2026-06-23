#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "5F3Z-2e-9-w"; 
    int k = 4;
    
    string temp = "";
    

    for (char c : s) {
        if (c != '-') {
            temp += toupper(c);
        }
    }
    

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
    
    
    reverse(result.begin(), result.end());
    
    
    cout << result << endl;
    
    return 0;
}
