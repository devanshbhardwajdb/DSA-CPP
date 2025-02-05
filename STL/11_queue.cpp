#include <bits/stdc++.h>

using namespace std;

int main()
{
    // It uses DEQUE by default internally
    // Used in BFS, Job Scheduling, FIFO Ops
    queue<int> q;

    q.push(32);
    q.push(12);
    q.push(0);
    q.pop();

    cout << "The Size of queue is : " << q.size() << endl;
    cout << "The front element of queue is : " << q.front() << endl;
    cout << "The last element of queue is : " << q.back() << endl;

    // We can't just iterate queue like vector and other stl, so use them if you want iteration but if you want to do FIFO operations (BFS) then use queue


    return 0;
}