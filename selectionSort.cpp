#include <iostream>
using namespace std;

int main(){

    int arr[]= {3,2,1,5};
    int n=4;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    
    }
    cout<<arr[0]<<arr[1]<<arr[2]<<arr[3];
    
}