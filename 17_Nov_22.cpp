
class Solution{
public:
	// #define ll long long

	ll countSubarray(int arr[], int n, int k) {
	    // code here
	    ll ans = 0;

    ll pr=-1;

    for (int i = 0; i < n; i++)

    {

        if (arr[i]>k)

        {

            ll x=n-i;

            ans+=x;

            ans+=((n-i)*((i-pr)-1));

            pr=i;

            

        }

        

    }

    return ans;
	}
};
