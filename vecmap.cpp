// #include <iostream>
// #include <string>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     unordered_map<string, int> umap;
//     umap["omkar"] = 12;
//     umap["ritesh"] = 13;
//     umap["rohit"] = 14;

//     // for (auto x : umap)
//     // {
//     //     cout << x.first << " --> " << x.second << endl;
//     // }

//     // for (auto itr = umap.begin(); itr != umap.end(); itr++)
//     // {
//     //     cout << itr->first << " --> " << itr->second << endl;
//     // }

//     // string key = "riteshi";
//     // if (umap.find(key) != umap.end())
//     //     cout << "Key found !";
//     // else
//     //     cout << "Key not found !";

//     int arr[] = {2, 3, 5, 6, 3, 7, 4, 2, 3, 5, 6, 4, 7, 4, 8, 5, 3, 2, 6, 4, 3, 1};
//     unordered_map<int, int> umaped;
//     for (int i = 0; i < 22; i++)
//     {
//         int key = arr[i];
//         umaped[key]++;
//     }
//     for (auto itr = umaped.begin(); itr != umaped.end(); itr++)
//     {
//         cout << itr->first << "  " << itr->second << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <unordered_map>
// #include <map>
// using namespace std;

// int main()
// {

//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {2, 2, 3, 3, 3, 1, 4, 4, 4, 5, 5, 5, 5};

//     unordered_map<int, int> umaped;
//     map<int, int> m;
//     for (int i = 0; i < 13; i++)
//     {
//         int key = arr2[i];
//         umaped[key]++;
//     }

//     for (auto itr = umaped.begin(); itr != umaped.end(); itr++)
//     {

//         cout << itr->first << "  " << itr->second << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main()
// {

//     int arr1[] = {1, 2, 3, 4, 5, 6, 1};
//     int arr2[] = {3, 4, 5, 6, 7};
//     int count = 0;

//     unordered_set<int> s;
//     for (int i = 0; i < 7; i++)
//     {
//         s.insert(arr1[i]);
//     }

//     for (int j = 0; j < 5; j++)
//     {
//         int key = arr2[j];
//         if (s.find(key) != s.end())
//         {
//             count++;
//             s.erase(key);
//         }
//     }
//     cout << count << endl;

//     return 0;
// }

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 1};
    int x = 10;

    unordered_map<int, int> umap;
    for (int i = 0; i < 7; i++)
    {
        umap[arr[i]]++;
    }

    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        int key = itr->first;
        int val = itr->second;

        int pair = x - key;
        if (pair == key)
        {
            if (val > 1)
            {
                cout << "CORRECT : " << endl;
            }
        }
        else
        {
            if (umap.find(pair) != umap.end())
            {
                cout << "WRONG" << endl;
            }
        }
    }

    cout << "WRONG" << endl;
    return 0;
}
