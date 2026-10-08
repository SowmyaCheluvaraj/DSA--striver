#include<bits\stdc++.h>
using namespace std;
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i= 0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        //star
        for(int k= 0;k<2*i+1;k++){
            cout<<" * ";
        }
        //space
        for(int l = 0;l<n-i-1;l++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      int n;
      cin>>n;
      print7(n);
       //print5(n);
    }
    cout<<endl;
  
}