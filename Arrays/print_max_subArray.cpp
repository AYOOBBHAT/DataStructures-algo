#include <bits/stdc++.h>
using namespace std;

pair<int, pair<int, int>> PrintmaxSubArray(vector<int> &arr)
{
    int maxSum = arr[0];
    int sum = 0;
    int n = arr.size();
    int start = 0;
    int end = 0;
    int tempStart=0;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        if (sum > maxSum)
        {
            maxSum = sum;
            start=tempStart;
            end=i;

        }

        if (sum < 0)
        {
            sum = 0;
            tempStart = i+1;
        }
    }

    return {maxSum,{start,end}};
}


int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    auto result=PrintmaxSubArray(arr);
    int maxisum=result.first;
     int start = result.second.first;
    int end = result.second.second;

    for(int i=start;i<end;i++){
        cout<<arr[i]<<endl;
    }

}


