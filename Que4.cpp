#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int target;
    cin>>target;

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
        
    };

    int r = 0, c = m-1;
    bool flag = false;

    while(r < n && c >= 0){
        if(matrix[r][c]==target){
            flag = true;
        }
        if (matrix[r][c] > target)
        {
            c--;
        }
        else{
            r++;
        }
    }
    if (flag)
    {
        cout<<"Element Found !"<<"\n";
    }
    else{
        cout<<"Element does not found !"<<"\n";
    }
    return 0;
}