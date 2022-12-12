#include <iostream>
using namespace std;

// sum of nth numbers

// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     int recursive_call = sum(n - 1);
//     int small_cal = n + recursive_call;
//     return small_cal;
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n :: ";
//     cin >> n;
//     cout << sum(n);
//     return 0;
// }

// FIBONACHI SERIES

// long long int fibonacci(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }

//     // recursive call
//     long long int recCall1 = fibonacci(n - 1);
//     long long int recCall2 = fibonacci(n - 2);

//     // small calculation
//     long long int smallCal = recCall1 + recCall2;
//     return smallCal;
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n :: ";
//     cin >> n;
//     cout << fibonacci(n);
//     return 0;
// }

// function to count number of ways to reach the stair

// int stairCount(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n;
//     }

//     int recursiveCall1 = stairCount(n - 1);
//     int recursiveCall2 = stairCount(n - 2);

//     int smallCal = recursiveCall1 + recursiveCall2;
//     return smallCal;
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n :: ";
//     cin >> n;
//     cout << stairCount(n);
//     return 0;
// }

// CHECK PALINDROME

// int isPalindrome(string s, int start, int end)
// {
//     if (start >= end)
//     {
//         return 1;
//     }
//     if (s[start] != s[end])
//     {
//         return 0;
//     }
//     return isPalindrome(s, start + 1, end - 1);
// }

// int main()
// {
//     cout << "Enter string :: ";
//     string s;
//     cin >> s;

//     cout << isPalindrome(s, 0, s.size() - 1);
// }

#include <vector>

bool isSubsetSum(vector<int> arr, int sum, int tempSum, int i)
{
    if (sum == tempSum)
    {
        return true;
    }
    if (i >= arr.size())
    {
        return false;
    }
    int recCall1 = isSubsetSum(arr, sum, tempSum + 1, i + 1);
    int recCall2 = isSubsetSum(arr, sum, tempSum, i + 1);

    return recCall1 || recCall2;
}

int main()
{
    int n, sum;
    vector<int> arr(n);
    // int *arr = new int[n];
    cout << "Enter the size of array :: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(i);
    }
    cout << "Enter the sum :: ";
    cin >> sum;

    isSubsetSum(arr, sum, 0, 0);

    return 0;
}
