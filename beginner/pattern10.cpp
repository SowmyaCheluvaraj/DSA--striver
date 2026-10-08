#include<bits\stdc++.h>
using namespace std;
void print20(int n){
    int space =2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if(i>n){
            stars = 2*n-i;
        }
        //stars
    for(int j=1;j<=stars;j++){
        cout<<"*";
    }
    //space
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
    //stars
    for(int i =1;i<=stars;i++){
        cout<<"*";
    }
    cout<<endl;
    if(i<n)space -=2;
    else space +=2;
}
}
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
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
        cout<<n<<endl;
        print21(n);
        cout<<endl;
    }
    return 0;
}