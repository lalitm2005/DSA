#include<iostream>  
using namespace std;
class student{//class name
        public://access specifier
        int roll_no;//attribute
        string name;//attribute
        string email;//attribute
    };
int main()  
{  
    student a;
    a.roll_no=10;
    a.name="abc";
    a.email="abc.iitj.ac.in";
    return 0;


}