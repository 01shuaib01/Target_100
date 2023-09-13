//{ Driver Code Starts
/* Driver program to test above function */
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
   public:
    int findSum(int A[], int N)
    {
    /*
        Approach 1:
            1.Using predefined sort function
            2.sum of value of first element + value of last element
            3.return the sum
            4.Time Complexity -> O(NLogN)
            5.Space Complexity -> O(1);

        Code :
            sort(A,A+N);
    	    int sum = A[0]+A[N-1];
    	    return sum;
    */

    /*
        Approach 1:
            1.just find max element and min element in an array
            2.then sum of min and max 
            3.return sum
            4.Time Complexity -> O(N)
            5.Space Complexity -> O(1);

    */
    
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i = 0;i<N;i++){
            if(A[i] > maxi)
                 maxi = A[i];
            if(A[i] < mini)
                mini = A[i];
        }
    
        return mini + maxi;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends