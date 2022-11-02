class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
              int area = 0;

 

            int max_row=0,max_col=0;

 

            vector<int> row;

 

            vector<int> col;

 

            row.push_back(0);

 

            col.push_back(0);

 

            for(auto i : enemy){

 

                row.push_back(i[0]);

 

                col.push_back(i[1]);

 

            }

 

            row.push_back(n+1);

 

            col.push_back(m+1);

 

            sort(row.begin(),row.end());

 

            sort(col.begin(),col.end());

 

            for(int i=1;i<row.size();++i){

 

                int temp = row[i]-row[i-1] -1;

 

                if(temp>max_row){

 

                    max_row=temp;

 

                }

 

            }

 

            for(int i=1;i<col.size();++i){

 

                int temp = col[i]-col[i-1] -1;

 

                if(temp>max_col){

 

                    max_col=temp;

 

                }

 

            }

 

            return max_row*max_col;       
        }
};
