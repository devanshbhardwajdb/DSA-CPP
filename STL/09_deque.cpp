#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Double Ended Queue is used for operations on front and back both sides.
    deque<int> dq = {12, 2, 1, 0, 34, 33, 44};

    dq.push_back(32);
    dq.push_front(32);
    dq.push_back(32);
    dq.pop_back();
    dq.pop_back();

    cout << "The Size of deque is : " << dq.size() << endl;
    cout << "The front element dynamic array is : " << dq.front() << endl;
    cout << "The last element dynamic array is : " << dq.back() << endl;

    for (int i : dq)
    {
        cout << i << ",";
    }

    return 0;
}