#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={10,20,30,40,50};
    int k;
    cin>>k;
    int n=5;
    
    cout<<"original array :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int element_to_add=5;
    for(int i=n;i>k;i--)
    {
        a[i]=a[i-1];
    }
    a[k]=element_to_add;

    cout<<"new array :";
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}