#include <iostream>
using namespace std;
class  students{
public:
    string name;
    int rollno;
    int marks;

    void display(){
        cout<<name<<" "<<rollno<<" "<<marks<<endl;

    }  

};
int main(){
    students s1,s2;
    s1.name="John";
    s1.rollno=101;
    s1.marks=85;
    s2.name="Alice";
    s2.rollno=102;
    s2.marks=90;


    s1.display();
    s2.display();


    return 0;
}