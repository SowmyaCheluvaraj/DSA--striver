#include<bits/stdc++.h>
using namespace std;
//intersection of two sorted array 
//optimal method
vector<int>findArrayIntersection(vector<int>&a,vector<int>&b){
    int n = a.size();
    int m= b.size();
    int i=0,j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }else if(b[j]>a[i]){
            j++;
        }else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
     vector<int>a = {1,1,2,3,3,4,5};
    vector<int>b ={2,3,4,4,5,6};
    vector<int>ans=findArrayIntersection(a,b);
    cout<<"Array:";
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0 ;

}