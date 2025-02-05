#include <bits/stdc++.h>

using namespace std;

int main()
{
    // It is MAX-HEAP by default 
    // Used in : Dijkstra's, Huffman, etc
    priority_queue<int> pq;

    pq.push(0);
    pq.push(12);
    pq.push(32);
    pq.pop();


    cout << "The Size of queue is : " << pq.size() << endl;
    cout << "The front element of queue is : " << pq.top() << endl;

    return 0;
}