#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[1000],n;
    cout<<"enter the size :";
    cin>>n;
    int temp,i;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=i-1;
    for(i=1;i<n;i++){
        int temp=arr[i];

        for(j=i-1;j>=0;j--){

            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    cout<<"sorted array:";
    
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    
    return 0;
    
}