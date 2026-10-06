#include <iostream>

using namespace std;

int main() {
    string dna_seq;
    cin >> dna_seq;

    int maximum_len_substring = 1;
    int curr_len = 1;

    for (int i = 1; i < dna_seq.size(); i++) {
        if (dna_seq[i] == dna_seq[i-1]) {
            curr_len += 1;
            maximum_len_substring = max(curr_len, maximum_len_substring);
        } else if (dna_seq[i] != dna_seq[i-1]) {
            curr_len = 1;
        }
    }

    cout << maximum_len_substring << endl;

    return 0;
}