//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int target)
    {
      int sum=0, min_len=INT_MAX;
      int l=0,r=0;
      for(int r=0; r<n; r++){
        sum+=arr[r];
        while(sum>target){ //greater than is needed
            //cout<<sum<<endl;
            sum-=arr[l];
            min_len=min(min_len,r-l+1);
            l++;
          }     
      }
      if(min_len==INT_MAX)return 0;
      return min_len; 
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends