// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void linearSearch(vector<int> arr,int n,int key){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Found at index "<<i;
            flag=1;
            break;
        }
        else{
            flag=0;
        }
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
    linearSearch(arr,n,key);

    return 0;
}
