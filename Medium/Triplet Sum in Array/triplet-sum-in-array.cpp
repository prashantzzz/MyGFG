//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int nums[], int n, int x){
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]=i+1;
        }

        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++){
                int k=mp[x-nums[j]-nums[i]]-1;
                
                if(k>-1 && k!=j && k!=i && j!=i) return true;
            }   
            
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends