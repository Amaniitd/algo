
#include"bits/stdc++.h"
#define ll long long int
using namespace std;
const int N  = 1e6+10;
ll a[N];            
ll s[4*N];          
ll lazy[4*N];  


ll fn(ll a, ll b){
    return a+b;
}

void build(ll l, ll r, ll p){
    if(l==r){
        s[p] = a[l];
        return;
    }
    ll m = (l+r)/2;
    build(l, m, 2*p+1);
    build(m+1, r, 2*p+2);
    s[p] = fn(s[2*p+1], s[2*p+2]);
}



ll query_lazy(ll l, ll r, ll i, ll j, ll p){

}