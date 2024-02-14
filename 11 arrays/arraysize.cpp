#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4,5,6,7,1};

    int size = sizeof(arr1);   // size = 4byte*(number of int character),  i.e. 4*8=32byte
    cout<<"Size of array is "<<size<<"\n";

    for(int i=0; i<(size/4); i++){
        cout<<arr1[i]<<"\n";
    }
    return 0;
}