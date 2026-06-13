#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[1000], n;

    cout<<"enter the size :";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int minindex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    cout<<"sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}