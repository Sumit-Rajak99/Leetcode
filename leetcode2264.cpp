#include <iostream>
#include <string>
using namespace std;

// Function to find largest good integer
string largestGoodInteger(string num) {
    string ans = "";
    for (int i = 0; i + 2 < num.size(); i++) {
        if (num[i] == num[i+1] && num[i] == num[i+2]) {
            string candidate = num.substr(i, 3);
            if (ans == "" || candidate > ans) {
                ans = candidate;
            }
        }
    }
    return ans;
}

int main() {
    string num;
    cout << "Enter a string of digits: ";
    cin >> num;

    string result = largestGoodInteger(num);
    if (result == "")
        cout << "No good integer found!" << endl;
    else
        cout << "Largest good integer is: " << result << endl;

    return 0;
}
