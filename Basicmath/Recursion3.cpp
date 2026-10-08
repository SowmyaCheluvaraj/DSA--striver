#include<bits\stdc++.h>
using namespace std;
//print Linearly from 1 to N
void fun(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    fun(i+1,n);
};
int main(){
    int n;
    cin>>n;
    fun(1,n);
    return 0;
}