#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (only digits 6 and 9): ";
    cin >> num;

    string s = to_string(num);

    for (char &c : s) {
        if (c == '6') {   
            c = '9';
            break;
        }
    }

    int result = stoi(s);
    cout << "Maximum number after change: " << result << endl;

    return 0;
}
