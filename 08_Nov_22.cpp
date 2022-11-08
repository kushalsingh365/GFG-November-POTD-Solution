class Solution{
    public:
    vector<long long int> twoOddNum(long long int a[], long long int n)  {
       long long int res = 0;
       
       for(int i = 0; i < n; i++)
        res ^= a[i];
        
        int t = res & ~(res-1);
        int x = 0, y = 0;
        for(int i = 0; i < n; i++) {
            if(t&a[i]) x ^= a[i];
            else y ^= a[i];
        }
        
         if (x > y) return {x,y};
         return {y,x};
    }
};
