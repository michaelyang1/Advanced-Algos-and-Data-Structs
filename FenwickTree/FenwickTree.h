#ifndef FENWICKTREE_H
#define FENWICKTREE_H
#include <vector>
typedef long long ll;
using namespace std;

class FenwickTree {
    public: 
        FenwickTree(int n);
        void update(int index, ll x); 
        void set(int index, ll x); 
        ll sum(int index); 
        ll range_sum(int left, int right);
    private:
        vector<ll> bit; // binary indexed tree
};
#endif