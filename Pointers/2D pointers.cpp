// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int rows;
    int col;
    cin>>rows;
    cin>>col;
    int **arr = new int *[rows];
    for(int i=0;i<rows;i++){
        arr[i]=new int [col];
    }
    
    //take the input
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    //print the output
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //free the mempry
    for(int i=0;i<rows;i++){
        delete[] arr[i];
    }
    delete[] arr;
    
    
    
    
    

    return 0;
}
