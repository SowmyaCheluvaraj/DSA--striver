#include<bits\stdc++.h>
using namespace std;
void print11(int n){
    int space = 2*(n-1);
    for(int i= 1;i<=n;i++){
          //numbers
          for(int j=1;j<=i;j++){
            cout<<j;
          }
          //space
          for(int j=1;j<=space;j++){
            cout<<" ";
          }
          //number
          for(int j=i;j>=1;j--){
            cout<<j;
          }
          cout<<endl;
          space-=2;
    }
}
void print12(int n){
  for(int i =0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<" ";
    }
    for(int j=0;j<(2*(n-1)+1);j++){ // this is wrong and cannot be used
      cout<<"* ";
    }
    for(int j=0;j<(2*(n-1)+1);j++){
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
        cout<<"n="<<n<<endl;
      print11(n);
    }
    
    return 0;
}