#include<bits/stdc++.h>
using namespace std;
// base class
class Vehicle{
    public:
    string brand = "Mahindra";
    void honk(){
        cout<<"cheen tapak dam dam"<<endl;
    }
};
// derived class
class Car: public Vehicle{
    public:
    string model = "Thar";
};
// there are also multi level inheritence
// Base class(parent)
class MyClass{
    private:
    int name;
    public:
    void myFunction(){
        cout<<"Some content for parent class.";
    }
};
// derived class(child)
class MyChild: public MyClass{
    // if i put private other than public then it will treat its element as private & will not be able to access then in int main just like private evne if it is public in parent
};
class MyGrandChild:public MyChild{
};
int main(){

}