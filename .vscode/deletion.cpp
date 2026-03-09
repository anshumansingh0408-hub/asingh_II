#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int key =30;
    
    

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            n=n-1;
            for(int j=1;j<n;j++)
            {
                arr[i]=arr[j+1];
            }
            break;
        }

        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}