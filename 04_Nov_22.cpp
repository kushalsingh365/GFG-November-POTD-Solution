class Solution {
  public:
    string baseEquiv(int n, int m){
        // code here
        if(m==1 && n<32) return "Yes";
        int cnt=0;
        int x=1;
        while(n/x){
            x*=2;
            cnt++;
        }
        if(m==cnt) return "Yes";
        else if(m>cnt)return "No";
        
        for(int i=3; i<=32; i++){
            cnt=0; x=1;
            while(n/x){
                x*=i;
                cnt++;
                if(cnt>m) break;
            }
            if(cnt==m) return "Yes";
        }
        return "No";
    }
};
