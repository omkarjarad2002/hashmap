/*
Given an array of size N.The task is to find the first repeating elements in the array of integers , i.e., the elements occures more than once and whose index of first occurence is smallest.

Constraints:
1<=N<=10 rase to 6
1<=Ai<=10 rase to 6

*/

#include "bits/stdc++.h"
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the elements you wants in array::"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    };

    const int N=1e6+2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    
    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        };
        
    };
    if (minidx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx+1<<endl;
    };
    
    return 0;
}