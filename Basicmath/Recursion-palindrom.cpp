#include<bits\stdc++.h>
using namespace std;
// for palindrome string
bool f(int i,string &str){
    if(i>=str.size()/2) return true;
    if(str[i]!=str[str.size()-i-1]){
        return false;
    }
    return f(i+1,str);
} 
int main() {
    string str = "madrm";
    cout << (f(0, str) ? "Palindrome" : "Not palindrome");
    return 0;
}