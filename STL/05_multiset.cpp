#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Stores duplicate elements in sorted manner.
    multiset<int> ms = {12, 2, 1, 1, 1, 1, 0, 34, 44};

    ms.insert(32);
    ms.erase(44);
  
    cout << "The Size of Multi set is : " << ms.size() << endl;

    int a = ms.count(1);
    cout << "The occurences of 1 are : " << a << endl;

    // Lower Bound is the first position where the key can be stored when the given key is not present
    // if the key is already present then it returns the element equivalent to given key.
    auto lb = ms.lower_bound(32);
    cout << "The lower bound is : " << *lb << endl;

    // Upper Bound returns the first element that is greater than key if there is greater element
    // If greator element do not exist then it return the index where greater element can come.
    auto ub = ms.upper_bound(34);
    cout << "The upper bound is : " << *ub << endl;

    for (int i : ms)
    {
        cout << i << ",";
    }

    return 0;
}