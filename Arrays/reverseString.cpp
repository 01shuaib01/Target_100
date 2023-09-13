//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {


    /*
        Approach 1:
        ->using predefined function then return the string.
        ->Time Complexty  -> O(N)
        ->Space Complexty -> O(1)
        
        Code:
        reverse(str.begin(),str.end());
        return str;
    */     
        
      
    /*
    
    Approach 2:
    make two pointer marked 1 with starting position and end position
    the swap the starting and ending position
    Time Complexity -> O(N)
    Space Complexity -> O(1)

    */
    int s = 0;
    int e = str.length()-1;
    
    while(s < e){
        swap(str[s++],str[e--]);
    }
    return str;
       
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends