#include<bits/stdc++.h>
using namespace std;
// here the same function department is used various times with different output(same function but different work)
// base class
class Student{
    public:
    void department(){
        cout<<"Default Branch - ES"<<endl;
    }
};
// Derived Branch
class CSE:public Student{
    public:
    void department(){
        cout<<"CSE Branch"<<endl;
    }
};
class EE:public Student{
    public:
    void department(){
        cout<<"EE Branch"<<endl;
    }
};
int main(){
    
    Student a;
    
    a.department();
    return 0;
}