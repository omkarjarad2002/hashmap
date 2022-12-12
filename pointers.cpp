#include <iostream>
using namespace std;

int main()
{

    int arr[4];
    cout << "Enter the elements : " << endl;

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int *p = arr;
    cout << "First element : " << *p << endl;
    cout << "Last element : " << *(p + 3) << endl;
    cout << "P++ element : " << *(p++) << endl;
    cout << "++P element : " << *(++p) << endl;

    return 0;
}