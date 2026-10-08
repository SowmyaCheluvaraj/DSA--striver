#include<bits\stdc++.h>
using namespace std;
void print17(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        //characters
        char ch='A';
        int breakpoint =(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint){
                ch++;
            }else{
                ch--;
            }
        }
        //space
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
        }

    }
void print18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}  

void print19(int n){
     int iniS=0;
    for(int i=0;i<n;i++){
        
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<" * ";
        }
        //space 
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<" * ";
        }
        iniS += 2;
        cout<<endl;
    }
        int inis = 2*n-2;
   for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        //space 
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        inis -= 2;
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
        print19(n);

    }
    return 0;
}
