#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int copy = num;   
    int ans = 0;     

    while (num > 0) {
        int rv = num % 10;      
        ans = ans * 10 + rv;    
        num = num / 10;         
    }

    if (copy == ans) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}
