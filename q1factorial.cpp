#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int d=fact(n-1);
    return n*d;
}
int main(){

    cout<<fact(5);
    return 0;
}
