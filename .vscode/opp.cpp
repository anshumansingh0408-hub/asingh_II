#include<bits/stdc++.h>
#include<string>
using namespace std;
class  Student{
    public:
    int roll;
    string name;
    void show(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
int main(){
    Student s;
    s.roll=5;
    s.name="XYZ";
    s.show();
    return 0;
}


