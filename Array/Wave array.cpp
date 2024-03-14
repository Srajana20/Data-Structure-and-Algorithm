
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void convertToWave(int n, vector<int>& arr){ 
        for(int i=1;i<n;i++){
            swap(arr[i-1],arr[i]);
            i++;
        }
    }
};
