#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;
    }
    int ans=power(x,n-1);
    return x*ans;
}
int main(){
    cout<<power(2,3);
    return 0;
}