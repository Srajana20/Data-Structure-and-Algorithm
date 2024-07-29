// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void BinarySearch(vector<int> arr,int n,int key){
    int flag=0;
    sort(arr.begin(),arr.end());
    int start=0;
    int end= n-1;
    
    int mid=start+(end-start)/2;
    while(start<=end){
         if(arr[mid]==key){
        cout<<"Found at index :"<<mid<<endl;
        flag=1;
        break;
    }
        if(arr[mid]>key){
            end=mid-1;
        }
        
        if(arr[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
    }
    if(flag==0){
        cout<<"Not found"<<endl;
    }
}
int main() {
    int n;
    cout<<"Enter n"<<endl;
    cin>>n; 
    
    vector<int> arr;
    int k;
    cout<<"enter values"<<endl;
    for(int i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
    }
    cout<<"enter a value to be searched"<<endl;
    int key;
    cin>>key;
    BinarySearch(arr,n,key);

    return 0;
}
