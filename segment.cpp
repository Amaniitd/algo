vector<int> create(vector<int> &arr){
    int n = arr.size();
    vector<int> seg(2 * n);
    for (int i = 0; i < n; i++){
        seg[n+i] = arr[i];
    }
    for (int i = n - 1; i > 0; i--){
        seg[i] = min(seg[2 * i], seg[2 * i + 1]);
    }
    return seg;
}

int minm(vector<int>& seg, int l, int r){
    int n = seg.size() / 2;
    l += n;
    r += n + 1;
    int ans = seg[l];
    while(l < r){
        if(l%2){
            ans = min(ans, seg[l]);
            l++;
        }
        if(r%2){
            r--;
            ans = min(ans, seg[r]);
        }
        l /= 2;
        r /= 2;
    }
    return ans;
}

void update(vector<int> & seg, int i, int k){
    int n = seg.size() / 2;
    i += n;
    seg[i] = k;
    int newVal;
    while(i > 1){
        i /= 2;
        newVal = min(seg[2 * i], seg[2 * i + 1]);
        seg[i] = newVal;
    }
}
