#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v){
    int s=0;
    int e=v.size()-1;

    while(s<=e){
        swap(v[s++],v[e--]);
    }
    return v;
}

vector<int> findarraysum(vector<int>&a,int n,vector<int>&b,int m){
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0;

    while(i>=0 && j>=0){
        int val1=a[i];
        int val2=b[j];

        int sum=val1+val2+carry;

        carry=sum/10;
        int element=sum%10;
        ans.push_back(element);
        i--;
        j--;    
    }
    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        int element=sum%10;
        ans.push_back(element);
        i--;
       
    }

    while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        int element=sum%10;
        ans.push_back(element);
        j--;
    }

    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        int element=sum%10;
        ans.push_back(element);
       
    }

    return reverse(ans);
    
}

int main(){
    vector<int>a={1,2,4,0};
    vector<int>b={2,2,2};
    int n=4;
    int m=3;

    vector<int> ans=findarraysum(a,n,b,m);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}