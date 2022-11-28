class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    vector<int> ans(n,0),res;

     int p=n,maxi=0;

     ans[-1]=0;

     for(int i=0;i<n;i++){

         if(a[i]>=0){

             ans[i] = ans[i-1]+a[i];

         }

         if(maxi<ans[i]){

             maxi=ans[i];

             p=i;

         }

     }

     for(int i=p;i<n-1;i++){

         if(a[i+1]<0)

             break;

         p++;

     }

     if(p!=n){

         for(int j=p;j>=0;j--){

             res.push_back(a[j]);

             if(j-1>=0 && a[j-1]<0)

                 break;

         }

     }

     reverse(res.begin(),res.end());

     if(res.empty())

         return {-1};

     return res;
	}
};
