#include<iostream>
using namespace std;

class vehicle {
    public:
    void start(){
        cout <<"vehicle started " << endl;
    }
};

class car : public vehicle {
    public:
    
    void music(){
        cout<< "Music is playing in the car" << endl;
    }
};

int main(){
    car mycar;
    mycar.start();
    mycar.music();
}
