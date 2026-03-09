#include <bits/stdc++.h>
using namespace std;
int firstOccurance( int arr[], int n, int key ){
    int low = 0, high = n -  1, result = - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if (arr[mid] ==   key){
            result = mid;
            high = mid - 1;
        }
        else if(arr[mid] <  key){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return result;
}

int lastOccurance(int arr[], int n , int key){
    int low = 0, high= n-1, result= -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == key){
            result = mid;
            low = mid + 1;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return result;
}

int main(){
    int arr[]= { 1, 2, 2, 2, 3, 4, 4, 5, 6, 7, 7, 7, 7 };
    int n= sizeof(arr)/sizeof(arr[0]);
    int key ;
    cout << "Enter the element  to find its occurance: ";
    cin >> key;

    int first = firstOccurance(arr, n, key);
    int last = lastOccurance(arr, n, key);

    if( first == -1){
        cout << "Element not found in array.";
    }
    else{
        cout << "Continuous duplicate sequence: ";
        for(int i = first; i<= last; i++){
            cout << arr[i] << " ";
        }
    }
    return 0;
}

