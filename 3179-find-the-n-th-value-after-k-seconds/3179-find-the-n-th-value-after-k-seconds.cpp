class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
         const int MOD = 1e9 + 7;
        vector<int> v(n, 1);
        for (int t = 0; t < k; ++t) {
            for (int i = 1; i < n; ++i) {
                v[i] = (v[i - 1] + v[i]) % MOD;
            }
        }
        return v[n - 1];
    }
};