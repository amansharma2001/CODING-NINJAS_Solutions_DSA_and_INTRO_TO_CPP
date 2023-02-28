#include <bits/stdc++.h>
using namespace std;

int subsetSum(int arr[], int n, int i, int sum, int count)
{
    if (i == n)
    {
        if (sum == 0)
            count++;
        return count;
    }
    count = subsetSum(arr, n, i + 1, sum - arr[i], count);
    count = subsetSum(arr, n, i + 1, sum, count);
    return count;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n == 0)
            cout << ""
                 << "\n";
        else
            cout << subsetSum(arr, n, 0, k, 0) << "\n";
    }
    return 0;
}