#include<iostream>
#include<vector>
using namespace std;

    void movezeroes(vector<int>& v){
        int j=0;
        for(int i=0;i<v.size();i++){

            if(v[i]!=0){
                swap(v[i],v[j]);
                j++;
            }
        }
        
    }

    int main(){
        vector<int>v={0,1,0,3,12};
        movezeroes(v);

        cout<<"output: ";
        for(int x:v){
            cout<<x<<" ";
        }
        return 0;
    }