#include<bits/stdc++.h>
using namespace std;

vector<int>countingSort(const vector<int> &A,int k){
    int n=A.size();
    vector<int>count(k+1,0);
    for(int i=0;i<n;i++){
        count[A[i]]++;
    }
    vector<int>output(n);
    int idx=0;
    for(int i=0;i<=k;i++){
        while(count[i]-->0){
            output[idx++]=i;
        }
    }
    return output;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    vector<int>sorted=countingSort(A,k);
    for(int i=0;i<n;i++){
        cout<<sorted[i]<<" ";
    }
    return 0;
}
