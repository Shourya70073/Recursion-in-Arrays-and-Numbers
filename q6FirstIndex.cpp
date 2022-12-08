#include<iostream>
using namespace std;
int first(int a[],int n,int t){
    if(n==1){
        if(a[0]==t){
            return 0;;
        }
        return -1;
    }
     if(a[0]==t){
        return 0;
    }
    return 1+first(a+1,n-1,t);
   
}


int main(){
    int a[]={1,2,3,3,5};
    cout<<first(a,5,3);
    return 0;
}