
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



void update(ll l, ll r, ll i, ll j, ll p, ll v){
    
    if(lazy[p]!=0){

    }

    if(l > r || r < i || l > j) return;

    if(l >= i && r <= j){
        s[p]+=(r-l+1)*v;
        if(l!=r){
            lazy[2*p+1]+=v;
            lazy[2*p+2]+=v;
        }
        
    }

    ll m = (l+r)/2;
    update(l, m, i, j, 2*p+1, v);
    update(m+1, r, i, j, 2*p+2, v);
    s[p] = fn(s[2*p+1], s[2*p+2]);

}




ll query_lazy(ll l, ll r, ll i, ll j, ll p){

}