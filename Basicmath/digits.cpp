#include<iostream>
using namespace std;
int count(int n){
     int count=0;
    while(n>0){
        int ld = n % 10;
        count =count+1;
        n= n/10;
    }
    return count;

}
int main(){
    int n;
    cin>>n;
    count(n);
    cout<<"count is ="<<count<<endl;
    return 0;
}
