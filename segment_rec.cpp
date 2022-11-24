#include "bits/stdc++.h"
using namespace std;

#define ll long long

const int N = 200002;
int a[N];
int s[4 * N];

void build(int i, int j, int p){
    if(i > j)
        return;
    if(i == j){
        s[p] = a[i];
        return;
    }
    int mid = (i + j) / 2;
    build(i, mid, 2 * p + 1);
    build(mid + 1, j, 2 * p + 2);
    s[p] = s[2 * p + 1] ^ s[2 * p + 2];
}

int query(int l, int r, int i, int j, int p){
    if (l > r || r < i || l > j)
        return 0;
    if (l >= i && r <= j)
        return s[p];
    ll m = (l + r) / 2;
    return query(l, m, i, j, 2 * p + 1) ^ query(m + 1, r, i, j, 2 * p + 2);
}

