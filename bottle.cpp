#include <iostream>
using namespace std;

int main() {
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;   // input values

    int total = numBottles;
    int empty = numBottles;

    while (empty >= numExchange) {
        int newBottles = empty / numExchange;
        total += newBottles;
        empty = (empty % numExchange) + newBottles;
    }

    cout << total << endl;  // output result
    return 0;
}
