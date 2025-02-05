#include <bits/stdc++.h>

using namespace std;

int main()
{
    // It Uses DEQUE by default Internally 
    // Used in LIFO Operations, Evaluating Postfix, DFS
    stack<int> s;

    s.push(32);
    s.push(12);
    s.push(0);
    s.pop();


    cout << "The Size of stack is : " << s.size() << endl;
    cout << "The top element of stack is : " << s.top() << endl;

    // We can't just iterate stack like vector and other stl, so use them if you want iteration, but if you want to do LIFO operations then use stack

    return 0;
}