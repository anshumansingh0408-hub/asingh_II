//linear search(searching an element)
#include <bits/stdc++.h>
using namespace std;
int main()
{

     int size,i,num,flag=0,j;
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
     for(i=0;i<size;i++)
     {
        if(a[i]==num)
        {
            flag=1;
            j=i+1;

        }
     }
     if(flag==1)
     cout<<"element is found at "<<j<< " position";
     else
     cout<<"element is not found";
     return 0;
    }     
//O(n) time complexity