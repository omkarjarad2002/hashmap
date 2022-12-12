// #include <iostream>
// using namespace std;

// class employee
// {

// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setData(int a1, int b1, int c1);
//     void getData()
//     {
//         cout << "The value of a is : " << a << endl;
//         cout << "The value of b is : " << b << endl;
//         cout << "The value of c is : " << c << endl;
//         cout << "The value of d is : " << d << endl;
//         cout << "The value of e is : " << e << endl;
//     }
// };

// void employee ::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     employee omkar;
//     omkar.setData(1, 2, 3);
//     omkar.d = 4;
//     omkar.e = 5;
//     omkar.getData();

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bn(void);
};

void binary::read(void)
{
    cout << "Enter a binary number : ";
    cin >> s;
}

void binary::chk_bn(void)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "NOT BINARY" << endl;
            exit(0);
        }
        cout << "BINARY" << endl;
    }
}

int main()
{
    binary b;
    b.read();
    b.chk_bn();

    return 0;
}
