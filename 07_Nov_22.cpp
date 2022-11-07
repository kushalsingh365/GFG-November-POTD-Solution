class Solution {

  public:

 void shortest_distance(vector<vector<int>>&p){

    int n = p.size();

     for(int k=0;k<n;k++) {

         for(int i=0;i<n;i++) {

             for(int j=0;j<n;j++) {

                 if(i==k || j==k || p[i][k]==-1 || p[k][j] == -1) continue;

                 p[i][j] = min(p[i][j]==-1 ? INT_MAX: p[i][j], p[i][k] + p[k][j]);

             }

         }

     }

 }

};
