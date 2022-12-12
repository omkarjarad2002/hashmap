#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0;
    int power = 1;
    while (n != 0)
    {
        int r = n % 2;
        n /= 2;

        ans += (r * power);
        power *= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int subsets = pow(2, n);
    for (int i = 0; i < subsets; i++)
    {
        int bn = decimalToBinary(i);
        int div = pow(10, n - 1);
        for (int j = 0; j < n; j++)
        {
            int q = bn / div;
            int r = bn % div;

            if (q == 0)
            {
                cout << "-\t";
            }
            else
            {
                cout << arr[j] << "\t";
            }
            bn = r;
            div /= 10;
        }
        cout << endl;
    }
}