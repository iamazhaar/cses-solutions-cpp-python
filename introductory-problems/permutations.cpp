#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> permutation;
    for (int i = 1; i <= n; i+=2) {
        permutation.push_back(i);
    }
    for (int i = 2; i <= n; i+=2) {
        permutation.push_back(i);
    }

    if (n==4) {
        permutation = {3, 1, 4, 2};
    }

    for (int i = 0; i < (int) permutation.size() - 1; i++) {
        if (abs(permutation[i]-permutation[i+1]) == 1) {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }

    for (int x: permutation) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}