#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Stores Duplicated in sorted manner.
    // Push and Pop at both front and back.
    list<int> l= {12, 2, 1, 0, 34, 33, 44};

    l.push_back(32);
    l.push_front(0);
    l.push_front(0);
    l.pop_back();
    l.pop_front();

    cout << "The Size of list is : " << l.size() << endl;
    cout << "The front element list is : " << l.front() << endl;
    cout << "The last element list is : " << l.back() << endl;

    for (int i : l)
    {
        cout << i << ",";
    }

    return 0;
}