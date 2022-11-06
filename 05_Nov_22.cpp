class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
        int freq[K+1] = {0};
        for(int i=0; i<N; i++){
            freq[arr[i]%K] += 1;
        }
        int c = freq[0] ? 1 : 0;
        for(int i=1; i<K/2; i++)
            c += max(freq[i], freq[K-i]);
        if(K%2)
            c += max(freq[K/2], freq[K-K/2]);
        if(K%2 == 0 && freq[K/2])
            c += 1;
        return c;
    }
};
