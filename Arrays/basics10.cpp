#include<bits\stdc++.h>
using namespace std;
//LinearSearch 
int linearSearch(int n,vector<int>&a,int num){
   for(int i=0;i<n;i++){
        if(a[i]==num){
            return i;
        }
       
    }
     return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int num;
    cin>>num;
     int index = linearSearch(n,a,num);
    for(int i=0;i<n;i++){
        cout<<"index ="<<index;
    }
    return 0;
}