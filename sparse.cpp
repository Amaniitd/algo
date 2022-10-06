
struct sparse{
    const static int M = 200002;
    const static int K = 22;
    vector<vector<int>> t(M, vector<int>(K));
    sparse(vector<int>& arr){
        int n = arr.size();
        for(int i = 0; i < n; i++){
            t[i] = arr[i];
        }
        for(int j = 1; j < K; j++){
            for(int i = 0; i + (1 << j) < n; i++){
                st[i][j] = max(st[i][j-1], st[i + (1 << (j-1))])
            }
        }
    }
}