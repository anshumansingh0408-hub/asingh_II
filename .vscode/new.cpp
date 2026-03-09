# include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)    {
        cin>>a[i];
    }
    cout<<"Array elements are:";
    for(i=0;i<n;i++)    {
        cout<<a[i]<<" ";
    }
    return 0;
}