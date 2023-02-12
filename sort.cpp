#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4] = {1, 5, 4, 2};
    // for sorting this whole array in best way possible we use sort
    sort(a, a + 4); // this sorted all the elements till the last
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }
    cout << "\n";
    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    sort(v.begin(), v.end()); // for sorting a string or a vector we use vectoror integers
    for (int i = 0; i < 4; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
