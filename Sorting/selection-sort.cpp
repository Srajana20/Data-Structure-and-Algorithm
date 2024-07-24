// Online C++ compiler to run C++ program online
#include <iostream>
 
using namespace std;


void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main() {
    
    int arr[10];
    cout<<"enter n"<<endl;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    
    cout<<"selection sort"<<endl;
    int minindex;
    for(int i=0;i<n;i++){
        minindex=i;
        for(int j=i;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr,i,minindex);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}
