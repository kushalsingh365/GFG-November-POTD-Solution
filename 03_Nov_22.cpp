class Solution{
    public:
    int removals(vector<int>& arr, int k){
       sort(arr.begin(),arr.end());
       int n=arr.size();
       int res=INT_MIN;
       for(int i=0;i<n;i++)
       {
           for(int j=i;j<n;j++)
           {
               if((arr[j]-arr[i])<=k)
               {
                   res=max(res,j-i+1);
               }
           }
       }
       return n-res;
    }
};
