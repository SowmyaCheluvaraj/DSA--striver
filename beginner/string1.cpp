#include<bits\stdc++.h>
using namespace std;
int main(){
    string s = "Sowmya";
    int len=s.size();
    s[len-1] = 'z';
    cout<<s[len-1]<<endl;
    cout<<s<<" ,"<<"length:"<<len<<endl;
    return 0;
}