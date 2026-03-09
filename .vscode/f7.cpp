//function with no return and parameter
# include<bits/stdc++.h>
using namespace std;
void sum(int a,int b)//using void instead of int
{
    int c;
    c=a+b;
    cout<<c;
}

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=sum(a,b);
    cout<<c;
    return 0;
}