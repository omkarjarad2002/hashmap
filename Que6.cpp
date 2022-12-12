//How to check the number is a power of 2 ?
//Ans - 

#include<iostream>
using namespace std;

bool ispowerof2(int n){
    return (n && !(n & (n-1)));
};

int main(){
    int x;
    cout<<"Enter :: ";
    cin>>x;
    cout<<"\n";
    cout<<ispowerof2(x)<<"\n";

    return 0;
}