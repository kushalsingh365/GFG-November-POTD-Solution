class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        // code here
           long long sum=0;

        for(int i=1;i<=sqrt(n);i++){

            

            if(n%i==0){

                if(i==n/i){

                    sum=sum+i;

                }

                else{

                    sum=sum+i;

                    sum=sum+n/i;

                }

               

            }

        }

        return sum;
    }
};
