#include <iostream>
using namespace std;
//n^2 time compl.

int main(){

    int arr[]= {8,7,9,0};
    int n=4;
    int counter=1;

    for(int i=1;i<n;i++){
        int curr= arr[i];
        for(int j=i;j>=0;j--){
            while(arr[j]>curr){
                arr[j+1]=arr[j];
                arr[j]=curr;
            }
        }
    }

    cout<<arr[0]<<arr[1]<<arr[2]<<arr[3];
    
}