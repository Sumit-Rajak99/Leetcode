#include <iostream>
using namespace std;

int main() {
    int num1 = 0, num2 = 0;   // ✅ दोनों variables को initialize कर दिया

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    int count = 0;

    // ✅ Loop तब तक चलेगा जब तक दोनों numbers positive हैं
    while (num1 > 0 && num2 > 0) {
        if (num1 >= num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
        count++;
    }

    cout << "Total operations = " << count << endl;

    return 0;
}
