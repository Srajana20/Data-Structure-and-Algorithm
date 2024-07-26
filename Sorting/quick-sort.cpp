// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int partition(vector <int> &arr, int start,int end){
    
    int pivot = arr[start];
    
    int count=0;
    
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
     int pivotindex=start+count;
    swap(arr[pivotindex],arr[start]);
   
    int i=start,j=end;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    
    return pivotindex;
}

void quick(vector<int> &arr,int start,int end){
    
    if(start >=end){
        return;
    }
    
    int p = partition(arr,start,end);
    
    quick(arr,start,p-1);
    quick(arr,p+1,end);
    
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
    
    quick(arr,0,n-1);
    
    cout<<"sorted"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
    
    return 0;
}
