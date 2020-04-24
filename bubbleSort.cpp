#include <iostream>
using namespace std;

//n^2 compl.

int main(){

    int arr[]= {3,2,1,5};
    int n=4;
    int counter=1;

    while(counter<n){

        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;

    }

    cout<<arr[0]<<arr[1]<<arr[2]<<arr[3];
    
}