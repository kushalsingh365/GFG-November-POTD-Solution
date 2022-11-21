class Solution{
	public:
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
        vector<vector<int>> ans;
        vector<int> list;
        f(n,ans,list);
        return ans;
    }
    
    void f(int n,vector<vector<int>>& ans,vector<int>& list) {
        if(n<=0) {
            if(n==0) {
                vector<int> list1;
                list1.assign(list.begin(),list.end());
                ans.push_back(list1);
            }
            return;
        }
        
        int v=n;
        if(list.size()>0) v = list[list.size()-1];
        
        for(int i=v;i>=1;i--) {
            list.push_back(i);
            f(n-i,ans,list);
            list.pop_back();
        }
    }
};
