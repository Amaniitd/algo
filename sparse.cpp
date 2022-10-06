struct sparse{
    const static int M = 200002;
    const static int K = 22;
    int lg[M] = {0, 0};

    int st[M][K];
    sparse(vector<int>& arr){
        int n = arr.size();
        for(int i = 0; i < n; i++){
            st[i] = arr[i];
        }
        for(int j = 1; j < K; j++){
            for(int i = 0; i + (1 << j) <= n; i++){
                st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
            }
        }
        for(int i = 2; i <= n; i++){
            lg[n] = lg[n/2] + 1;
        }
    }
    int min(int l, int r){
        int j = lg[r-l+1];
        return min(st[l][j], st[r-(1<<j) + 1][j]);
    }
};