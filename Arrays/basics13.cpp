#include<bits/stdc++.h>
using namespace std;
//intersection of two sorted arrays 
//brute force method
vector<int>findArrayIntersection(vector<int>&a,vector<int>&b){
    int n=a.size();
    int m = b.size();

    vector<int>ans;
    vector<int> vis(m, 0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i]) break;
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