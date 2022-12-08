#include<iostream>
using namespace std;
int count(int n){
    if(n<=9){
        return 1;
    }
    int ans=count(n/10);
    return ans+1;
}
int main(){
    cout<<count(1254);
    return 0;
}