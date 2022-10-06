// #include "bits/stdc++.h"
// using namespace std;

// typedef long long ll;
// #define int long long



// struct bit{
//     const static int M = 200002;
//     int BIT[M] = {0};
//     bit(vector<int>& arr){
//         for (int i = 0; i < arr.size(); i++){
//             BIT[i + 1] = arr[i];
//         }
//         for (int i = 1; i <= arr.size(); i++){
//             int p = i + (i & -i);
//             if (p <= arr.size()){
//                 BIT[p] += BIT[i];
//             }
//         }
//     }
//     ll sum(int i){
//         ll s = 0;
//         while (i > 0){
//             s += BIT[i];
//             i -= i & -i;
//         }
//         return s;
//     }
//     void add(int i, int k){
//         while (i < M){
//             BIT[i] += k;
//             i += i & -i;
//         }
//     }
// };


// struct lazybit{
//     bit b1;
//     bit b2;
//     lazybit(vector<int>& arr){
//     }
// }