class Solution{   
public:
    int numberOfSubsequences(string s, string w){
        int ans=0;
        int j=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]==w[j]){
                s[i]='@';
                j++;
            }
            if(j==w.length()){
                ans++;
                i=0;
                j=0;
            }
        }
        return ans;
    }
};
