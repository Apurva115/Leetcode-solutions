// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
    int sum =0;
    int start = 0;
    int end = 0;
    while(end-start+1 <= k)
    {
        
        sum = sum + arr[end];
        end++;
    }
    start++;
   
    int max = sum;
    while(end< n)
    {
        sum = sum + arr[end]- arr[start-1];
        end++;
        start++;
        if(max< sum)
        {
            max = sum;
        }
        
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