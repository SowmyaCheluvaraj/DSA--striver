#include<bits\stdc++.h>
using namespace std;
void doSomething(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside the function:"<<arr[0]<<endl;
}
int main(){
    int n = 5;
    int arr[n];
     for(int i=0;i<=4;i++){
        cin>>arr[i];
     }
     /*for(int i=0;i<=4;i++){
        cout<<arr[i]<<" "<<endl;
     }*/
    doSomething(arr,n);
        cout<<"value inside int main:"<<arr[0]<<endl;
    return 0;
}