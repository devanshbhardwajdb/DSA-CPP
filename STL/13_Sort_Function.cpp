#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {12, 2, 1, 0, 34, 33, 44};
    int arr[5] = {2,3,0,1,5};

    cout << "The dynamic array before sorting is : " << endl;
    for (int i : v)
    {
        cout << i << ",";
    }
    cout<<endl;
    cout << "The static array before sorting is : " << endl;
    for(int i :arr){
        cout<<i<<",";
    }

    sort(v.begin(), v.end());
    sort(arr,arr+5);

    
    cout << endl <<  "The dynamic array after sorting is : " << endl;
    for (int i : v)
    {
        cout << i << ",";
    }
    cout<<endl;
    cout << endl <<  "The static array after sorting is : " << endl;
    for(int i:arr){
        cout<<i<<",";
    }

    return 0;
}