//insertion sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,key;
    cout<<"enter no of elements:";
    cin>>n;
    int a[n];
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    cout<<"sorted array :";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}