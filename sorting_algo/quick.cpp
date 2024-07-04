



int partition(vector<int>arr,int high,int low ){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while (i<j){
        if(arr[i]<=pivot && i<=high-1){
            i++;

        }

        
    }
}



void quick_sort(vector<int>arr,int low ,int high){
    if(low<high){
        int pIndex=partition(arr,low,high);
        quick_sort(arr,low, pIndex-1);
        quick_sort(arr,pIndex+1,high);

    }

}
vector<int>quickSort(vector<int>arr){


    quick_sort(arr,0,arr.size()-1);
    return arr;
}