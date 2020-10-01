#include<bits/stdc++.h>
using namespace std;
int divideIntoEqualSum(int a[], n){
    int left_sum[n],right_sum[n],left=0,right=0;
    for(int i=0;i<n;i++){
        left=left+a[i];
        left_sum[i]=left;
    }
        
    for(int i=n-1;i>=0;i--){
        right+=a[i];
        right_sum[i]=right;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(left_sum[i]==right_sum[i+1]){
            ans=a[i];
        }
    }
    return ans;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = divideIntoEqualSum(a,n);
}