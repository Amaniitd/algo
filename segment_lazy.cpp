
#include"bits/stdc++.h"
#define ll long long int
using namespace std;
const int N  = 1e6+10;
ll a[N];            
ll s[4*N];          
ll lazy[4*N];  


void build(ll l, ll r, ll p){
    if(l==r){
        s[p] = a[l];
    }
}