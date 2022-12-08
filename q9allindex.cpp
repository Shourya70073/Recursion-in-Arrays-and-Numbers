#include<iostream>
#include<vector>
using namespace std;
void allindex(int a[],int n,int tr,vector<int>&t){
    if(n==1){
        if(a[0]==tr){
            t.push_back(0);
            
            return;
        }
        return;
    }
    allindex(a,n-1,tr,t);
    if(a[n-1]==tr){
        t.push_back(n-1);
    }
}
int main(){
    int a[]={1,2,3,3,3};
    vector<int>t;
    allindex(a,5,3,t);
    for(auto i:t){
        cout<<i<<" ";
    }
    return 0;
}