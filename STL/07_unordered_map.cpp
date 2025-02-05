#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Stores Unique Keys in Unsorted manner.
    unordered_map<int, string> um;
    um[1] = "Apple";
    um[2] = "Banana";

    um.erase(2);
    um.insert({2,"Oranges"});
    um.insert({2,"Grapes"});

    unordered_map<int, string>::iterator it;

    for (it = um.begin(); it != um.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}