#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Stores Duplicate Keys in sorted manner
    multimap<int, string> mm;
   
    mm.insert({1, "Apple"});
    mm.insert({2, "Oranges"});
    mm.insert({2, "Grapes"});
    mm.insert({2, "Guava"});
    mm.insert({3, "Watermelon"});
    mm.erase(3);

    // Returns the count of a key.
    cout << "The count of given key is : " << mm.count(2) << endl;

    multimap<int, string>::iterator it;

    for (it = mm.begin(); it != mm.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}