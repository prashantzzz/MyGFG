//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
#define MOD 1000000007
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    ll a=1,b=1,temp=1;
	    //2,3,5,8,13
	    for(int i=0; i<n; i++){
	        temp=a;
	        a=b%MOD;
	        b=(temp+b)%MOD; //temp bcz a is changed above
	    }
	    return b;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends