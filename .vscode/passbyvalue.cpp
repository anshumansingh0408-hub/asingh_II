# include<bits/stdc++.h>
using namespace std;
void SWAP(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"swapped values are:"<<a<<","<<b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    SWAP(a,b);
    cout<<"swapping values are:"<<a<<","<<b;
    return 0;
}

