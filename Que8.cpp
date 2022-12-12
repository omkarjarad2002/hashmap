//Write a programm to calculate all possible subset of a set {a,b,c}
//Ans-

#include<iostream>
using namespace std;

void subSet(int arr[], int n){
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if( i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    
};

int main(){
    int arr[3] = {1,2,3};
    subSet(arr, 3);
    return 0;
}