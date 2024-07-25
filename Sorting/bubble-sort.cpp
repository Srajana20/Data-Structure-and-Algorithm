// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    vector<int> arr;
    
    cout<<"enter n;";
    cin>>n;
    
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
    }
    cout<<"array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    cout<<"After sorting:"<<endl;
    
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
         if(swapped == false){
                break;
            }
    }
    
     for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}
