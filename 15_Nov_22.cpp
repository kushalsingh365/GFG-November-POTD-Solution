class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        int i = 0, j = 0 , ans = 1;
        map<int,int> mp;
        mp[arr[0]]++;
        while(j<N)
        {
            int mx = mp.rbegin()->first;
            int mn = mp.begin()->first;
            if(mx-mn <=1)
            {
                ans = max(ans,j-i+1);
                j++;
                mp[arr[j]]++;
            }
            else
            {
                mp[arr[i]]--;
                if(!mp[arr[i]]) mp.erase(arr[i]);
                i++;
            }
        }
        return ans;
    }
};
