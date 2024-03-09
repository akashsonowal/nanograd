#include <iostream>
#include <string>

using namespace std;

class Human{
    float dna;

    Human() {

    } // constructor

    ~ Human(){
        // destructor
    }

    public:
        string face;
        void walk(){
            cout << "Walking";
        }
};

class SuperHero: public Human { //inheritance

};

void Human::walk(){
    cout << "Walking!";
};

Human jeff;
Human* myPointer = new Human;
delete myPointer;

unique_ptr<Human> ptrjeff(new Human);
cout << ptrJeff->foo;

int main(){
    string hello = "Hello I am string";
    cout << "Hi Mom!";
}
