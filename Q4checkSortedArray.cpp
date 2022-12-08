#include<iostream>
using namespace std;
bool issorted(int a[],int n){
    if(n==1){
        return true;
    }
    bool ans=issorted(a+1,n-1);
    if(ans){
        if(a[0]<=a[1]){
            return true;
        }
        else{
            return false;
        }
    }
    return ans;
}
int main(){
    int a[]={1,2,3,4,5};
    int b[]={9,66,3,2,1};
    cout<<issorted(a,5)<<endl;
    cout<<issorted(b,5);
    return 0;
}