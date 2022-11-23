
#define ll long long

void build(ll node, ll start, ll end, vector<ll> arr){
    if(start == end){
        tree[node] = arr[start];
        return;
    }
    ll mid = (start+end)/2;
    build(2*node, start, mid, arr);
    build(2*node+1, mid+1, end, arr);
    return;
}


void update(ll node, ll start, ll end, ll pos, ll val, vec)