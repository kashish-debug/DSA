#include <iostream>
using namespace std;
class  Rectangle{
    public:
    int length;
    int breadth;
    int input(){
        cout<<"Enter length and breadth of rectangle: ";
        cin>>length>>breadth;
        return 0;
    }
    int display(){
        cout<<"length is:"<<length<<" "<<"breadth is:"<<breadth<<endl;
        return 0;
    }

    int area(){
        return length*breadth;
    }
    
};
int main(){
    Rectangle r1,r2;
    r1.input();
    r2.input();
    r1.display();
    r2.display();
    cout<<"Area of rectangle 1 is: "<<r1.area()<<endl;
    cout<<"Area of rectangle 2 is: "<<r2.area()<<endl;

    return 0;
}