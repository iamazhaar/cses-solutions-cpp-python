#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    long long int min_moves = 0;
    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i-1]) {
            min_moves = min_moves + (nums[i - 1] - nums[i]);
            nums[i] = nums[i - 1];
        }
    }

    cout << min_moves << endl;

    return 0;
}