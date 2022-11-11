class Solution {
public:
    
    
    string isSumOfTwo(int N){
        // code here
        vector<int> prime(N+1,1);
        for(int p=2;p*p<=N;p++){
            if(prime[p]==true){
                for (int i = p * p; i <= N; i += p)
                    prime[i] = false;
            }
        }
        unordered_map<int, int> arr;
        int count=0;
        for(int i=2;i<=N;i++){
            if(prime[i]==true){
                arr[i]++;
            }
        }
        for(auto it:arr){
            if(arr.find(N-it.first)!=arr.end()){
                return "Yes";
            }
        }
        return "No";
    }
};
