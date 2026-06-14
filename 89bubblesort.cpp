#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[1000],n;

    cout<<"enter the size :";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
        cout<<"sorted array:";
    
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    
    return 0;

}