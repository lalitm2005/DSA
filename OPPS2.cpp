#include<bits/stdc++.h>
using namespace std;
// using encapsulation using private data outside get and set method
class student{
    private:
    int roll_no;
    int name;
    public:
    // putting value of roll_no as our input parameter
    void set_roll(int roll){
        roll_no=roll;
    }
    // returning private roll_number
    int get_roll(){
        return roll_no;
    }
};
int main(){
    student a;
    a.set_roll(11);
    auto b=a.get_roll();
    cout<<b<<endl;
    return 0;
}