#include<iostream>  
using namespace std;
class student{//class name
        public://access specifier
        int roll_no;//attribute
        string name;//attribute
        string email;//attribute
// there are two methods of writing methods(in other words function of class)1)inside class 2)outside class

// this is for inside
        void print_name(){
            cout<<name<<endl;
        }
        void print_email(){
            cout<<email<<endl;
        }
        void print_roll_no();
        // created constructors(automatically called when an object is created) and destructors(automatically called when an object of a cleass is destroyed)
        // can also pass parameters do not know what to do about it
        student(){
            cout<<"student joined"<<endl;
        }
        ~student(){
            cout<<"student removed"<<endl;
        }
    };
    // this is for outside(but for somereason i have to initialize it inside the class)
    void student::print_roll_no(){
        cout<< roll_no<<endl;
    }
int main()  
{  
    student a;
    a.roll_no=10;
    a.name="abc";
    a.email="abc.iitj.ac.in";
    a.print_email();
    a.print_name();
    a.print_roll_no();
    
    return 0;


}