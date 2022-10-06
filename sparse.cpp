typedef long long ll;
#define int long long
const int K = 22;
const int MAXN = 200002;
int lg[MAXN + 1];
int st[MAXN][K + 1];


void sparse(vector<int> & arr){
    lg[1] = 0;
    for (int i = 2; i <= MAXN; i++)
        lg[i] = lg[i / 2] + 1;
    int N = arr.size();
    for (int i = 0; i < N; i++)
        st[i][0] = arr[i];

    for (int j = 1; j <= K; j++)
        for (int i = 0; i + (1 << j) <= N; i++)
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
}

int minm(int L, int R){ // zero indexed
    int j = lg[R - L + 1];
    return min(st[L][j], st[R - (1 << j) + 1][j]);
}
