#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> triangle(int arr[], int n) {
    sort(arr, arr + n);
    vector<int> ans;
    int k = n;
    int i = 0;
    int j = 1;

    while (i < j && j < k) {
        if (arr[i] + arr[j] > arr[k] && arr[i] + arr[k] > arr[j] && arr[k] + arr[j] > arr[i]) {
            for (int b = j + 1; b <= k; b++) {
                vector<int> temp = { arr[i], arr[j], arr[b] };
                ans.push_back(temp);
            }
            i++;
            j++;
        }
        else {
            // Move j and k inward if triangle condition is not met
            if (j < k) {
                j++;
            }
            else {
                i++;
                j = i + 1;
                k = n - 1;
            }
        }
    }

    return ans;
}

int main() {
    int arr[] = { 9, 3, 4, 5, 1, 6, 8, 7, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<vector<int>> ans = triangle(arr, n);

    // Printing the triangles
    for (auto triangle : ans) {
        cout << "Triangle: ";
        for (int side : triangle) {
            cout << side << " ";
        }
        cout << endl;
    }

    return 0;
}

