#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Stores Unique elements in Unsorted manner.
    unordered_set<int> s = {12, 2, 1, 0, 34, 33, 44};

    s.insert(32);
    s.erase(1);

    // cout <<  s.find(1) << endl;

    cout << "The Size of unordered set is : " << s.size() << endl;
    cout << "The element 12 present or not : " << s.count(12) << endl;

    for (int i : s)
    {
        cout << i << ",";
    }

    return 0;
}