#include<bits\stdc++.h>
using namespace std;
//print linearly from 1 to N by backtracking
void fun(int i,int n){
    if(i<1){
        return;
    }
        fun(i-1,n);
    cout<<i<<endl;
};
int main(){
    int n;
    cin>>n;
    fun(n,n);
    return 0;
}