#include "FenwickTree.h"
using namespace std;

FenwickTree::FenwickTree(int n) {
    bit = vector<ll>(n + 1); // fenwick trees are 1 indexed 
}

void FenwickTree::update(int index, ll x) {
    while(index < bit.size()) {
        bit[index] += x;
        index += index & -index; // bitwise AND
    }
}

void FenwickTree::set(int index, ll x) {
    ll orig_val = range_sum(index, index); 
    update(index, x - orig_val);
}

ll FenwickTree::sum(int index) {
    ll s = 0;
    while(index) {
        s += bit[index];
        index -= index & -index;
    }
    return s;
}

ll FenwickTree::range_sum(int left, int right) {
    return sum(right) - sum(left - 1);
}