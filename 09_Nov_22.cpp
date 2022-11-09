class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int totalSum = 0;
	    for(int i = 0; i < n; i++){
	        totalSum += arr[i];
	    }
	    vector<int> prev(totalSum + 1, false);
	    vector<int> curr(totalSum + 1, false);
	    curr[0] = prev[0] = true;
	    prev[arr[0]] = true;
	    for(int i = 1; i < n; i++){
	        for(int j = 1; j <= totalSum; j++){
	            curr[j] = prev[j];
	            if(j >= arr[i]){
	                curr[j] = curr[j] || prev[j - arr[i]];
	            }
	        }
	        prev = curr;
	    }
	    int ans = totalSum;
	    for(int i = 1; i < totalSum; i++){
	        if(curr[i]){
	            ans = min(ans, abs(totalSum - 2*i));
	        }
	    }
	    return ans;
	} 
};
