#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // int maxSum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n ; j++) 
    //     {
    //         int sum=0;
    //         for (int k = i; k < j; k++)
    //         {
    //             sum+=arr[k];
    //         }
    //         maxSum = max(maxSum, sum);
    //     }
        
    // }
    // cout<<maxSum<<endl;

    //Above expression we used three nested loops so the time complexity is O(n3) so for reducing the time complexity we write below program:

    int currSum[n+1];
    currSum[0]=0;

    for (int i = 1; i <= n; i++)
    {
        currSum[i] = currSum[i-1] +arr[i-1];
    }
    
    int maxSum = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        int sum=0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
        
    }
    cout<<maxSum<<endl;

    return 0;
    
}