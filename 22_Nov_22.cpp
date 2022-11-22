class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.
	    int n = nums.size();

     vector<int>arr(n,0);

     for(int i=0;i<n;i++){

         for(int j=i+1;j<n;j++){

             if(nums[i]<nums[j]){

                 arr[i]++;

             }

         }

     }

     int ans = 0;

     

     for(int i=0;i<n;i++){

         for(int j=i+1;j<n;j++){

             if(nums[i]<nums[j]){

                 ans += arr[j];

             }

         }

     }

     return ans;
	}
};
