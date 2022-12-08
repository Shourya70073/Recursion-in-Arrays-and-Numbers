#include<iostream>
using namespace std;
void rev(int a[],int l,int h){
    if(l==h){
        return;
    }
    int temp=a[l];
    a[l]=a[h];
    a[h]=temp;
    rev(a,l+1,h-1);
}
int main(){
    int a[]={1,2,3,4,5};
    rev(a,0,4);
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}