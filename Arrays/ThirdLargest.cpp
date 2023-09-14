//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        /*
            Approach 1:
                1.sort the array
                2.return n-3
                3.Time complexity -> O(NLogN)
                4.Space Complexity -> O(1) : we are not using any space yet
        
        */
        /*
            Approach 2:
                1.firstly find first largest then second then largest element
                2.return the third largest
                3.Time Complexity -> O(N)
                4.Space Complexity -> O(1) 
        */

         int first_largest = INT_MIN;
         int second_largest = INT_MIN;
         int third_largest = INT_MIN;
         
         for(int i =0;i<n;i++)
            first_largest = max(first,a[i]);
        
        for(int i = 0;i<n;i++){
            if(a[i] > second_largest && a[i]!=first_largest)
                second_largest = a[i];
        }
        for(int i = 0;i<n;i++){
            if(a[i] > third_largest && a[i]!=second_largest && a[i]!=first_largest)
                third_largest = a[i];
        }
        return third_largest;
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends