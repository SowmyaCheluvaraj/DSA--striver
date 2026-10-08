#include<bits\stdc++.h>
using namespace std;

//take two numbers and print its sum
/*void printName( string name){
  cout<<"hey"<<" "<<name;
}*/

/*void add(int x,int y){
    cout<<"Sum:"<<x+y<<endl;
}*/
int maxx(int num1,int num2){
     if(num1>=num2) {
        cout<<"num1 is maximum"<<endl;
        return num1;
     }else{
        return num2;
     }
     return -1;
}
int main(){
   /* string name;
    cin>>name;
    printName(name);
    cout<<" "<<endl;
    string name2;
    cin>>name2 ;
    printName(name2);*/

   /* int x,y;
    cin>>x>>y;
    add(x,y);*/

    int num1,num2;
    cin>>num1>>num2;
    int minimum = maxx(num1,num2);
    cout<<minimum;
    
    return 0;
}