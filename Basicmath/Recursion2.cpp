#include<bits\stdc++.h>
using namespace std;
//print name 5 times using Recursion
void fun(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Sowmya"<<endl;
    fun(i+1,n);
};
int main(){
    int n;
    cin>>n;
    fun(1,n);
    return 0;
}