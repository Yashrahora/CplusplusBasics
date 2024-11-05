#include <iostream>
#include<string>

using namespace std;

class student{
    public:
    
    int age;
    string name;
    student(string studentName, int studentAge){
        name = studentName;
        age = studentAge;
    }
    
    void displayinfo(){
        
        cout<< "Name :" << name <<endl;
        cout<< "Age :" << age << endl;
    }
};

int main() {
    student student1("kelly",30);
    
    student1.displayinfo();
    
    return 0;
}