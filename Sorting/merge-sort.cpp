// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void merge(vector <int> &arr, int start,int end){
    int mid=(start+end)/2;
    
    int len1= mid+1-start;
    int len2= end-mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    int index1=0;
    int index2=0;
    int mainIndex = start;
    
    for(int i=0;i<len1;i++){
        first[i]=arr[mainIndex++];
    }
    mainIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainIndex++];
    }
    mainIndex=start;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIndex++]=first[index1++];
        }
        else{
            arr[mainIndex++]=second[index2++];
        }
    }
    
    
    while(index1<len1){
        arr[mainIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainIndex++]=second[index2++];
    }
    
    delete []first;
    delete []second;
}

void mergesort(vector<int> &arr,int start,int end){
    int mid = (start+end)/2;
    
    if(start >=end){
        return;
    }
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end);
}

int main() {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    
    vector<int> arr;
    int k;
    cout<<"enter values"<<endl;
    for(int i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
    }
    
    mergesort(arr,0,n-1);
    
    cout<<"sorted"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
    
    return 0;
}
