#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Stores Unique keys in Sorted manner.
    map<int, string> m;
    m[1] = "Apple";
    m[2] = "Banana";

    m.erase(2);
    m.insert({2,"Oranges"});

    map<int, string>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}