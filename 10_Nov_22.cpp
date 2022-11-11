{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
         int sum = 0;

        int left = 0;

        int right = 0;

        if(s == 0) {

            for(int i=0; i<n; i++) {

                if(arr[i] == 0) {

                    return {i + 1, +1};

                }

            }

            return {-1};

        }

        

        while(left < n and right <= n) {

            if(sum < s) {

                sum += arr[right];

                right++;

            }

            else if(sum > s) {

                sum -= arr[left];

                left++;

            }

            else if(sum == s) {

                return {left + 1, right};

            }

        }

        return {-1};
    }
};
