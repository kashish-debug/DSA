#include <iostream>
using namespace std;
class  Students{
public:
    string name;
    int rollno;
    int marks;

    void display(){
        cout<<name<<" "<<rollno<<" "<<marks<<endl;

    }  

};
int main(){
    Students s1,s2;
    cin>>s1.name>>s1.rollno>>s1.marks;
    
    cin>>s2.name>>s2.rollno>>s2.marks;


    s1.display();
    s2.display();


    return 0;
}