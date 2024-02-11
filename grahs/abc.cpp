#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int triangle(int arr[],int n){
sort(arr,arr+n);
vector<vector<int> > ans;
int k=n;
int i=0;
int j=1;

   while(i<j<k){

    if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[k]+arr[j]>arr[i]){
        for(int b=j+1;b<=k;b++){
            vector<int> temp={arr[i],arr[j],arr[b]};

            ans.push_back(temp);

        }

        i++;
        j++;
    }
    return ans;

     
    }
   




}


int main(){
int arr[]={9,3,4,5,1,6,8,7,2};
int n=sizeof(arr)/sizeof(arr[0]);
vector<vector<int> > ans;
triangle(arr,n);

}