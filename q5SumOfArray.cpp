#include<iostream>
using namespace std;
int sum(int a[],int n){
    if(n==0){
        return 0;
    }
    int ans=sum(a+1,n-1);
    return a[0]+ans;
}
int main(){
    int a[]={1,2,3,4,5};
    cout<<sum(a,5);
    return 0;
}

