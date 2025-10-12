#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    int n1 = s1.length();
    int n2 = s2.length();

    if (n1 > n2) {
        cout << "false";
        return 0;
    }

    vector<int> count1(26, 0), count2(26, 0);
    int left = 0, right = 0;

    // 🔹 Step 1: Initialize first window
    while (right < n1) {
        count1[s1[right] - 'a']++;
        count2[s2[right] - 'a']++;
        right++;
    }

    // 🔹 Step 2: Check if first window matches
    if (count1 == count2) {
        cout << "true";
        return 0;
    }

    // 🔹 Step 3: Sliding window logic
    while (right < n2) {
        count2[s2[right] - 'a']++;   // नया char जोड़ो
        count2[s2[left] - 'a']--;    // पुराना char हटाओ
        left++;
        right++;

        if (count1 == count2) {
            cout << "true";
            return 0;
        }
    }

    cout << "false";
    return 0;
}
