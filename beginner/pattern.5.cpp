#include<bits\stdc++.h>
using namespace std;
void pattern(int n){
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
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
         }
         for(int j=0;j<2*n-(2*i+1);j++){
            cout<<" * ";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
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
      pattern(n);
    }
    cout<<endl;
  
}