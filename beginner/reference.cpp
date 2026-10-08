#include<bits\stdc++.h>
using namespace std;

//pass by reference
void doSomething(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
// call by value
/*void doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
}*/
int main(){
    int num =10;
    doSomething(num);
    cout<<num <<endl;
    return 0;
}