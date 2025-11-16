#include <iostream>
using namespace std;

int main() {
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;

    int total = numBottles;
    int empty = numBottles;

    while (empty >= numExchange) {
        int newBottles = empty / numExchange;
        total += newBottles;
        empty = (empty % numExchange) + newBottles;
    }

    cout << total << endl;  
    return 0;
}
