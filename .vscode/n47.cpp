//Binary search(elements should be in increasing order)
#include <bits/stdc++.h>
using namespace std;
int main()
{

     int size,i,num,first,last,mid,flag=0;
     cout<<"enter the size:";
     cin>>size;
     int a[size];
     cout<<"enter elements:";
     for(i=0;i<size;i++)
     {
        cin>>a[i];
     }
     cout<<"enter a element which you want to find :";
     cin>>num;
     first=0;
     last=size-1;
     mid=(first+last)/2;
     while(first<=last)
     {
        if(a[mid]>num)
        {
            last=mid-1;
        }
        else if(a[mid]==num)
        {
            cout<<"element found";
            flag=1;
        }
        else
        {
            first=mid+1;
        }
        mid=(first+last)/2;
     }
     if (flag==1)
     cout<<"element is found";
     else
     cout<<"element not found";
     return 0;
    }     
//O(log n) time complexity