#include<bits\stdc++.h>
using namespace std;
/*
A school has following system to grade
a.below 25 -fail
b.25 to 44 -E
c.45 to 49 -D
d.50 to 59 -C
e.60 to 79 -B
f.80 to 100 -A
Ask user to enter marks and print corresponding grade
*/
int main(){
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"you are fail"<<endl;
    }
    else if( marks<=44){
        cout<<"your grade is E"<<endl;
    }
    else if(marks<=49){
        cout<<"D"<<endl;
    }
    else if( marks<=59){
        cout<<"C"<<endl;
    }
    else if( marks<=79){
        cout<<"B"<<endl;
    }
    else if( marks<=100){
        cout<<"A"<<endl;
    }else{
        cout<<"Invalid marks"<<endl;
    }
    return 0;
}