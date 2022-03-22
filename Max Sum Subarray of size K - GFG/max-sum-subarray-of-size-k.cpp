// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        if(k > n)
        {
            return 0;
        }
        int prev = 0;
        for(int i=0; i<k; i++)
        {
            prev = prev + arr[i];
        }
        int max = prev;
        for(int i=1; i<= n-k; i++)
        {
            int sum = prev+ arr[i+k-1] - arr[i-1];
            if(max<sum)
            {
                max = sum;
            }
            prev = sum;
        }
        return max;
    
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends