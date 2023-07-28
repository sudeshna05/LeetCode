#User function Template for python3


class Solution:
    def missingNumber(self,arr,n):
        sum=0
        act=n*(n+1)/2
        for i in range(n-1):
            sum+=arr[i]
        return int(act-sum)
        # code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    s=Solution().missingNumber(a,n)
    print(s)
# } Driver Code Ends