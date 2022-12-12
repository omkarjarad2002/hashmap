//Write a programm to count the number of ones in binary representation of a number.
//Ans-

#include<iostream>
using namespace std;

int numberofones(int n){
    int count = 0;
    while (n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int x;
    cout<<"Enter :: "<<endl;
    cin>>x;
    cout<<numberofones(x)<<endl;
    return 0;
}