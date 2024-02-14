#include<iostream>
using namespace std;

void myfun(int arr[5]){
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    myfun(arr);
    return 0;
}