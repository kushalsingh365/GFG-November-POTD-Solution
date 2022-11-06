class Solution:
    def minPartition(self, N):
        l = [1,2,5,10,20,50,100,200,500,2000]
        res = 0
        ans = []
        for i in l[::-1]:
            if N>=i:
                res += N//i
                ans.extend([i]*(N//i))
                N = N%i
        return ans
