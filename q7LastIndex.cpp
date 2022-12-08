#include<iostream>
using namespace std;
int last(int a[],int n,int t){
    if(n==1){
        if(a[0]==t){
            return 0;;
        }
        return -1;
    }
    int ans=last(a,n-1,t);
    if(a[n-1]==t){
        return n-1;
    }
    return ans;
   
}


int main(){
    int a[]={1,2,3,3,3};
    cout<<last(a,5,3);
    return 0;
}