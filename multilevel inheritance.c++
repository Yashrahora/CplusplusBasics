#include <iostream>
using namespace std;
class LivingBeing {
    public:
        void breathe() {
            cout << "Living being is breathing." << endl;
        }
};
class Animal : public LivingBeing {
    public:
        void walk(){
            cout << "Animal is walking." << endl;
    }
};
class Bird : public Animal {
    public:
        void fly(){
            cout << "Bird is flying." << endl;
    }
};
int main() {
    Bird myBird;
    myBird.breathe();
    myBird.walk();
    myBird.fly();
    return 0;
}
