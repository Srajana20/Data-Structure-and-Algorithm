
#include <iostream>
using namespace std;


int power(int x,int n){
    if(n==0){
        return 1;
    }
    else{
        return x*power(x,n-1);
    }
}
int main() {
    int x;
    cin>>x;
    int n;
    cin>>n;
    int result = power(x,n);
    cout<<result;

    return 0;
}
