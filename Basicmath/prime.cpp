#include<iostream>
using  namespace std;
int main(){
    int n;
    int cnt =0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=0){
                cnt++;
            }
        }
    }
    if(cnt==2){
        cout<<"true";
    }else{
        cout<<false;
    }
    return 0;
}