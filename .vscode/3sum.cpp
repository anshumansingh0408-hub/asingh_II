#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a, a+n);
	for(int i=0;i<n;i++){
	    if(a[i]==a[i+1]) continue;
	    for(int j=i+1;j<n;j++)
	    {
	        if(a[j]==a[j+1]) continue;
	        for(int k=j+1;k<n;k++){
	            if(a[k]==a[k+1]) continue;
	            if (a[i]==a[j] && a[j]==a[k] && a[k]==a[i]){
	                cout<<"duplicate";
	            }
	            else{
	                if(a[i]+a[j]+a[k]==0){
	                    cout<<a[i]<<" "<< a[j]<<" "<< a[k]<<endl;
	                }
	               
	            }
	        }
	    }
	}

}