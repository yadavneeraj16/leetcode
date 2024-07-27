class Solution {
public:
    int minChanges(int n, int k) {
        int ans = 0;
        bitset<32>bitN(n), bitK(k);
        for(int i=0;i<32;i++)
        {
            if(bitN[i] and not bitK[i]) ans++;
            if(not bitN[i] and bitK[i]) return -1;
        }
        return ans;
    }
};