#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,pos,min,t,n;
    cin>>n;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];

    }
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
            }
        }
    t=a[i];
    a[i]=a[pos];
    a[pos]=t;

    }
    cout<<"sorted array";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
