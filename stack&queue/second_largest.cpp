
int getMax(int n, vector<int> a)
{
    int F_largest = INT_MIN;
    int ans1;

    for (int i = 0; i < n; i++)
    {

        if (a[i] > F_largest)
        {
            F_largest = a[i];
        }
    }

    int S_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (a[i] > S_largest && a[i] != F_largest)
        {
            S_largest = a[i];
            ans1 = S_largest;
        }

        return ans1;
    }
};

int getMin(int n, vector<int> a)
{
    int F_MIN = INT_MAX;
    int ans2;

    for (int i = 0; i < n; i++)
    {

        if (a[i] < F_MIN)
        {
            F_MIN = a[i];
        }
    }

    int S_MIN = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if (a[i] < S_MIN && a[i] != F_largest)
        {
            S_MIN = a[i];
            ans2 = S_MIN;
        }

        return ans2;
    }
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
}
