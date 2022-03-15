#include "FenwickTree.h"
#include <iostream>

int main() {
    cout << "Fenwick Tree Demo\n" << endl;
    int n = 5;
    FenwickTree ft = FenwickTree(n);
    // populate the fenwick tree
    for(int i = 1; i <= n; i++) {
        ft.update(i, i);
    }

    // take the sum of fenwick tree at certain index
    for(int i = 0; i < n; i++) {
        cout << "Sum at index " << i + 1 << ": " << ft.sum(i + 1) << endl;
    }
    cout << "\n";
    // take the range sum of fenwick tree between indicies
    for(int i = 0; i < n - 1; i++) {
        cout << "Sum between index " << i + 1 << " and " << i + 2 << ": " << ft.range_sum(i + 1, i + 2) << endl;
    }
}