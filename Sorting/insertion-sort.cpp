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
    
    int temp;
    for(int i=1;i<n;i++){
        temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
         arr[j+1]=temp;
    }
    
     for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}
