//function with return and no parameter()
# include<bits/stdc++.h>
using namespace std;
int sum()
{
    int a,b,c;
    cout<<"enter two no:";
    cin>>a>>b;
    c=a+b;
    return c;
}

int main()
{
    int c=sum();
    cout<<c;
    return 0;
}