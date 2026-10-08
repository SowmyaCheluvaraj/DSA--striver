#include<bits\stdc++.h>
using namespace std;
//print in terms of N to 1
void fun(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    fun(i-1,n);
};
int main(){
    int n;
    cin>>n;
    fun(n,n);
    return 0;
}