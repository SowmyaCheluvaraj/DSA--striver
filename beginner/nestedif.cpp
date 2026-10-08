#include<bits\stdc++.h>
using namespace std;
/*
Take the age from the user and then decide accordingly
1.If age is <18,
  print->"your not eligible for job"
2.If age >= 18 and age<55,
   print-> "you are eligible for job"
3. If age >= 55 and age<= 57,
   print -> "eligible for job,retirement soon"
4. If age>57 and age<=65
   print -> "reteriment time"      
*/
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"you are not eligible for job"<<endl;
    }
    //>=18
    else if( age<=57){
        cout<<"eligible for job "; 
        if(age>=54){
            cout<<",but reteriment soon";
        }
    }
    else{
        cout<<"reteriment time"<<endl;
    }
    return 0;
}