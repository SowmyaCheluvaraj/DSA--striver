#include<bits\stdc++.h>
using namespace std;
//Move all the zeros to the end of the array
//Brute force method
vector<int>moveZero(int n,vector<int>a){
    vector<int>temp;
    //step1
    for(int i=0;i<n;i++){
        if(a[i]!= 0){
            temp.push_back(a[i]);
        }
    }
    //step2
    int nz = temp.size();
    for(int i=0;i<n;i++){
        a[i] = temp[i];
    }
    //step3
    for(int i=nz;i<n;i++){
        a[i] =0;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a = moveZero(n,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
    
}