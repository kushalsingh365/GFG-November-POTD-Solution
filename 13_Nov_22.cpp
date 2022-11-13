class Solution{
public:
    int totalWays(int n, vector<int>capacity) {
        // code here
        sort(capacity.begin(), capacity.end());
        long long ans = 1, mod = 1e9 + 7;
        for(int x = 0; x < n; x++){
            ans *= (capacity[x] - x);
            ans %= mod;
        }
        return int(ans);
    }
};
