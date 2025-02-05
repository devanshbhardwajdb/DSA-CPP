#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Stores Duplicates in Unsorted manner
    // Push and Pop at back only.
    vector<int> v = {12, 2, 1, 0, 34, 33, 44};

    v.push_back(32);
    v.pop_back();

    cout << "The Size of dynamic array is : " << v.size() << endl;
    cout << "The front element dynamic array is : " << v.front() << endl;
    cout << "The last element dynamic array is : " << v.back() << endl;

    for (int i : v)
    {
        cout << i << ",";
    }

    return 0;
}