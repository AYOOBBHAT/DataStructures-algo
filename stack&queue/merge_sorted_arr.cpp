#include <bits/stdc++.h>

vector<int> sortedArray(vector<int> a, vector<int> b)
{

    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> merge;

    while (i < n1 && j < n2)
    {

        if (a[i] <= b[j])
        {
            if (merge.back() != a[i] || merge.size() == 0)
            {
                merge.push_back(a[i]);
            }
            i++;
        }

        else
        {

            if (merge.back() != b[j] || merge.size() == 0)
            {
                merge.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {

        if (merge.back() != a[i] || merge.size() == 0)
        {

            merge.push_back(a[i]);
        }
        i++;
    }

    while (j < n2)
    {

        if (merge.back() != b[j] || merge.size() == 0)
        {

            merge.push_back(b[j]);
        }
        j++;
    }

    return merge;
}