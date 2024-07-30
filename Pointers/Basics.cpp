#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int *ptr = &num;  // Correctly getting the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    int arr[3] = {1, 2, 3};
    int *p = arr;  // Correctly getting the address of the first element of arr

    cout << "Array elements: ";
    for (int i = 0; i < 3; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Pointer p points to: " << p << endl;
    cout << "Values pointed to by p: ";
    for (int i = 0; i < 3; ++i) {
        cout << *(p + i) << " ";  // Accessing array elements using pointer arithmetic
    }
    cout << endl;
    
    
    //increamenting array elements using pointer
    (*p)++;
    cout<<"First value : "<<*p<<endl;
    cout<<"First value via a[0] : "<<arr[0]<<endl;
    p++;
    (*p)++;
    cout<<"Second value : "<<*p<<endl;
    cout<<"Second value via a[1] : " <<arr[1]<<endl;
     p++;
    (*p)++;
    cout<<"Third value : "<<*p<<endl;
    
    
    
    //Mock interview
    int arr1[3]={20,40,50};
    int *a=arr1;
    cout<<arr1[0]<<","<<arr1[1]<<","<<*a<<endl;
    (*a)++;
    cout<<arr1[0]<<","<<arr1[1]<<","<<*a<<endl;
    *a++;
    cout<<arr1[0]<<","<<arr1[1]<<","<<*a<<endl;
    *a+1;
    cout<<arr1[0]<<","<<arr1[1]<<","<<*a<<endl;
    *(a+1);
    cout<<arr1[0]<<","<<arr1[1]<<","<<*a<<endl;
    (*a)++;
    cout<<arr1[0]<<","<<arr1[1]<<","<<*a<<endl;

    return 0;
}
