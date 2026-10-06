#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> sequence = {n};
    while (n != 1) {
        if (n & 1) {
            n = n * 3 + 1;
            sequence.push_back(n);
        } else {
            n = n / 2;
            sequence.push_back(n);
        }
    }

    for (long long int x: sequence) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}