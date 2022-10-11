#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &a)
{
    int ln = a.size(), key, i, j;
    for (i = 1; i < ln; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    vector<int> a = {5, 2, 4, 6, 1, 3};
    insertion_sort(a);

    int len = a.size();
    for (int i = 0; i < len; i++)
        cout << a[i] << " ";
    cout << "\n";
}
